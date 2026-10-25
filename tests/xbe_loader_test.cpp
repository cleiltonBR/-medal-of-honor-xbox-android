#include "xbe_loader.h"
#include "xbox_guest_memory.h"

#include <cassert>
#include <cstdint>
#include <string>
#include <vector>

using moha::runtime::ParseXbeImage;
using moha::runtime::XbeImageInfo;

static void Write32(std::vector<std::uint8_t>& b,
                    std::size_t p, std::uint32_t v) {
    b[p] = static_cast<std::uint8_t>(v);
    b[p + 1] = static_cast<std::uint8_t>(v >> 8);
    b[p + 2] = static_cast<std::uint8_t>(v >> 16);
    b[p + 3] = static_cast<std::uint8_t>(v >> 24);
}

int main() {
    constexpr std::uint32_t base = 0x00010000;
    std::vector<std::uint8_t> b(0x300, 0);

    b[0] = 'X'; b[1] = 'B'; b[2] = 'E'; b[3] = 'H';
    Write32(b, 0x104, base);
    Write32(b, 0x108, 0x178);
    Write32(b, 0x10C, 0x2000);
    Write32(b, 0x11C, 1);
    Write32(b, 0x120, base + 0x180);
    Write32(b, 0x128, (base + 0x1000) ^ 0xA8FC57ABu);

    const std::size_t s = 0x180;
    Write32(b, s + 0, 0);
    Write32(b, s + 4, base + 0x1000);
    Write32(b, s + 8, 0x100);
    Write32(b, s + 12, 0x280);
    Write32(b, s + 16, 0x20);
    Write32(b, s + 20, base + 0x220);

    b[0x220] = 't';
    b[0x221] = 'e';
    b[0x222] = 's';
    b[0x223] = 't';
    b[0x224] = '\0';

    XbeImageInfo info{};
    std::string error;

    assert(ParseXbeImage(b.data(), b.size(), &info, &error));
    assert(info.base_address == base);
    assert(info.entry_point == base + 0x1000);
    assert(info.sections.size() == 1);
    assert(info.sections[0].name == "test");

    for (std::size_t i = 0; i < 0x20; ++i)
        b[0x280 + i] = static_cast<std::uint8_t>(i + 1);

    assert(moha::runtime::InitializeGuestMemory(
        info.image_size, info.base_address));
    assert(moha::runtime::LoadXbeSections(
        b.data(), b.size(), info, &error));

    auto* loaded = static_cast<std::uint8_t*>(
        moha::runtime::TranslateGuestAddress(base + 0x1000, 0x100));
    assert(loaded != nullptr);
    for (std::size_t i = 0; i < 0x20; ++i)
        assert(loaded[i] == static_cast<std::uint8_t>(i + 1));
    for (std::size_t i = 0x20; i < 0x100; ++i)
        assert(loaded[i] == 0);

    moha::runtime::ShutdownGuestMemory();

    b[0] = 'Z';
    assert(!ParseXbeImage(b.data(), b.size(), &info, &error));

    return 0;
}
