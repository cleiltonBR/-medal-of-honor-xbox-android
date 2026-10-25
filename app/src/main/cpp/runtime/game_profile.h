#pragma once

#include <cstdint>
#include <string_view>

namespace moha::runtime {

struct GameProfile {
    std::string_view id;
    std::string_view display_name;
    std::string_view xbe_filename;
    std::uint32_t guest_base;
    std::uint32_t entry_point;
    bool addresses_verified;
};

const GameProfile* FindGameProfile(std::string_view id) noexcept;
const GameProfile& NewGameTemplate() noexcept;

}
