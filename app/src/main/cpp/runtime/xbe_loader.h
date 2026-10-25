#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace moha::runtime {

struct XbeSection {
    std::uint32_t virtual_address = 0;
    std::uint32_t virtual_size = 0;
    std::uint32_t raw_address = 0;
    std::uint32_t raw_size = 0;
    std::uint32_t flags = 0;
    std::string name;
};

struct XbeImageInfo {
    std::uint32_t base_address = 0;
    std::uint32_t image_size = 0;
    std::uint32_t header_size = 0;
    std::uint32_t entry_point = 0;
    std::vector<XbeSection> sections;
};

bool ParseXbeImage(const std::uint8_t* bytes, std::size_t size,
                   XbeImageInfo* out, std::string* error);

}
