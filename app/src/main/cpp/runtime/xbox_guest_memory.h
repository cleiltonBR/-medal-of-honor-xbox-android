#pragma once

#include <cstddef>
#include <cstdint>

namespace moha::runtime {

bool InitializeGuestMemory(std::size_t size);
void ShutdownGuestMemory();

bool IsGuestRangeValid(std::uint32_t address, std::size_t length);
void* TranslateGuestAddress(std::uint32_t address, std::size_t length);

std::size_t GuestMemorySize();

}
