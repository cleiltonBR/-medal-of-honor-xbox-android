#include "game_profile.h"

namespace moha::runtime {
namespace {

// These addresses are deliberately unset until verified from the XBE.
constexpr GameProfile kEuropeanAssault{
    "moha-european-assault",
    "Medal of Honor: European Assault",
    "default.xbe",
    0,
    0,
    false
};

constexpr GameProfile kTemplate{
    "new-game",
    "New Xbox Game",
    "default.xbe",
    0,
    0,
    false
};

}

const GameProfile* FindGameProfile(std::string_view id) noexcept {
    if (id == kEuropeanAssault.id) {
        return &kEuropeanAssault;
    }
    if (id == kTemplate.id) {
        return &kTemplate;
    }
    return nullptr;
}

const GameProfile& NewGameTemplate() noexcept {
    return kTemplate;
}

}
