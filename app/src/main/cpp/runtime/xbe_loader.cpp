#include "xbe_loader.h"
#include "xbox_guest_memory.h"

#include <cstring>
#include <limits>
#include <utility>

namespace moha::runtime {
namespace {

bool Read32(const std::uint8_t* b, std::size_t size,
            std::size_t off, std::uint32_t* out) {
    if (!b || !out || off > size || size - off < 4) return false;
    *out = static_cast<std::uint32_t>(b[off])
         | (static_cast<std::uint32_t>(b[off + 1]) << 8)
         | (static_cast<std::uint32_t>(b[off + 2]) << 16)
         | (static_cast<std::uint32_t>(b[off + 3]) << 24);
    return true;
}

bool Fail(std::string* error, const char* message) {
    if (error) *error = message;
    return false;
}

}

bool ParseXbeImage(const std::uint8_t* b, std::size_t size,
                   XbeImageInfo* out, std::string* error) {
    if (!b || !out) return Fail(error, "Argumento nulo.");
    if (size < 0x178) return Fail(error, "Arquivo pequeno demais para um XBE.");

    if (b[0] != 'X' || b[1] != 'B' || b[2] != 'E' || b[3] != 'H')
        return Fail(error, "Assinatura XBEH ausente; arquivo nao e um XBE valido.");

    XbeImageInfo info{};
    std::uint32_t section_count = 0;
    std::uint32_t section_table = 0;
    std::uint32_t encoded_entry_point = 0;

    if (!Read32(b, size, 0x104, &info.base_address) ||
        !Read32(b, size, 0x108, &info.header_size) ||
        !Read32(b, size, 0x10C, &info.image_size) ||
        !Read32(b, size, 0x11C, &section_count) ||
        !Read32(b, size, 0x120, &section_table) ||
        !Read32(b, size, 0x128, &encoded_entry_point))
        return Fail(error, "Cabecalho XBE incompleto.");

    // No XBE original, o ponto de entrada e codificado com XOR.
    info.entry_point = encoded_entry_point ^ 0xA8FC57ABu;

    if (info.header_size < 0x178 || info.header_size > size)
        return Fail(error, "Tamanho de cabecalho XBE invalido.");

    if (info.image_size == 0 || info.base_address == 0)
        return Fail(error, "Base ou tamanho da imagem invalido.");

    if (section_count > 4096)
        return Fail(error, "Quantidade de secoes fora do limite.");

    const std::uint64_t table_offset =
        static_cast<std::uint64_t>(section_table) - info.base_address;

    if (section_table < info.base_address ||
        table_offset > size ||
        static_cast<std::uint64_t>(section_count) * 56 > size - table_offset)
        return Fail(error, "Tabela de secoes fora do arquivo.");

    const std::uint64_t image_end =
        static_cast<std::uint64_t>(info.base_address) + info.image_size;
    if (image_end > (std::uint64_t{1} << 32))
        return Fail(error, "Intervalo da imagem excede o espaco de enderecos.");

    info.sections.reserve(section_count);

    for (std::uint32_t i = 0; i < section_count; ++i) {
        const std::size_t p =
            static_cast<std::size_t>(table_offset) +
            static_cast<std::size_t>(i) * 56;

        std::uint32_t name_va = 0;
        XbeSection s{};

        if (!Read32(b, size, p + 0, &s.flags) ||
            !Read32(b, size, p + 4, &s.virtual_address) ||
            !Read32(b, size, p + 8, &s.virtual_size) ||
            !Read32(b, size, p + 12, &s.raw_address) ||
            !Read32(b, size, p + 16, &s.raw_size) ||
            !Read32(b, size, p + 20, &name_va))
            return Fail(error, "Entrada de secao incompleta.");

        const std::uint64_t virtual_end =
            static_cast<std::uint64_t>(s.virtual_address) + s.virtual_size;
        if (s.virtual_address < info.base_address ||
            virtual_end > image_end || virtual_end < s.virtual_address)
            return Fail(error, "Endereco virtual de secao invalido.");

        if (s.raw_size != 0 &&
            (s.raw_address > size || s.raw_size > size - s.raw_address))
            return Fail(error, "Dados brutos da secao fora do arquivo.");

        if (name_va >= info.base_address) {
            const std::uint64_t name_off =
                static_cast<std::uint64_t>(name_va) - info.base_address;
            if (name_off < size) {
                for (std::size_t j = static_cast<std::size_t>(name_off);
                     j < size && j - name_off < 64 && b[j] != 0; ++j)
                    s.name.push_back(static_cast<char>(b[j]));
            }
        }

        info.sections.push_back(std::move(s));
    }

    if (info.entry_point < info.base_address ||
        static_cast<std::uint64_t>(info.entry_point) >= image_end)
        return Fail(error, "Ponto de entrada fora da imagem.");

    *out = std::move(info);
    if (error) error->clear();
    return true;
}


bool LoadXbeSections(const std::uint8_t* bytes, std::size_t size,
                    const XbeImageInfo& image, std::string* error) {
    if (!bytes)
        return Fail(error, "Dados XBE ausentes.");

    if (image.image_size == 0 ||
        !IsGuestRangeValid(image.base_address, image.image_size))
        return Fail(error, "Memoria convidada nao cobre a imagem XBE.");

    // Validate every section before writing any section.
    for (const auto& section : image.sections) {
        if (section.virtual_size == 0 ||
            section.raw_size > section.virtual_size)
            return Fail(error, "Tamanho de secao invalido.");

        const std::uint64_t end =
            static_cast<std::uint64_t>(section.virtual_address) +
            section.virtual_size;
        const std::uint64_t image_end =
            static_cast<std::uint64_t>(image.base_address) +
            image.image_size;

        if (section.virtual_address < image.base_address ||
            end > image_end || end < section.virtual_address ||
            !IsGuestRangeValid(section.virtual_address,
                               section.virtual_size))
            return Fail(error, "Secao fora dos limites da memoria.");

        if (section.raw_size != 0 &&
            (section.raw_address > size ||
             section.raw_size > size - section.raw_address))
            return Fail(error, "Dados brutos fora do arquivo.");
    }

    for (const auto& section : image.sections) {
        auto* destination = static_cast<std::uint8_t*>(
            TranslateGuestAddress(section.virtual_address,
                                  section.virtual_size));
        if (!destination)
            return Fail(error, "Falha ao traduzir endereco da secao.");

        std::memset(destination, 0, section.virtual_size);
        if (section.raw_size != 0)
            std::memcpy(destination, bytes + section.raw_address,
                        section.raw_size);
    }

    if (error) error->clear();
    return true;
}

}
