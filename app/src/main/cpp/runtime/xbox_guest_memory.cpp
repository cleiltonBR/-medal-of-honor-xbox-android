#include "xbox_guest_memory.h"

#include <limits>
#include <memory>
#include <mutex>
#include <new>

namespace moha::runtime {
namespace {

constexpr std::uint32_t kDefaultGuestMemoryBase = 0x80000000u;

std::unique_ptr<std::uint8_t[]> g_memory;
std::size_t g_memory_size = 0;
std::uint32_t g_memory_base = kDefaultGuestMemoryBase;
std::mutex g_memory_mutex;

} // namespace

bool InitializeGuestMemory(std::size_t size, std::uint32_t base_address) {
    if (size == 0 ||
        size > std::numeric_limits<std::uint32_t>::max() ||
        static_cast<std::uint64_t>(base_address) + size >
            (std::uint64_t{1} << 32)) {
        return false;
    }

    std::lock_guard<std::mutex> lock(g_memory_mutex);

    std::unique_ptr<std::uint8_t[]> memory(
        new (std::nothrow) std::uint8_t[size]{}
    );

    if (!memory) {
        return false;
    }

    g_memory = std::move(memory);
    g_memory_size = size;
    g_memory_base = base_address;
    return true;
}

void ShutdownGuestMemory() {
    std::lock_guard<std::mutex> lock(g_memory_mutex);
    g_memory.reset();
    g_memory_size = 0;
    g_memory_base = kDefaultGuestMemoryBase;
}

bool IsGuestRangeValid(std::uint32_t address, std::size_t length) {
    std::lock_guard<std::mutex> lock(g_memory_mutex);

    if (!g_memory || address < g_memory_base) {
        return false;
    }

    const std::uint64_t offset =
        static_cast<std::uint64_t>(address) - g_memory_base;

    if (offset > g_memory_size) {
        return false;
    }

    return length <= g_memory_size - static_cast<std::size_t>(offset);
}

void* TranslateGuestAddress(std::uint32_t address, std::size_t length) {
    std::lock_guard<std::mutex> lock(g_memory_mutex);

    if (!g_memory || address < g_memory_base) {
        return nullptr;
    }

    const std::uint64_t offset =
        static_cast<std::uint64_t>(address) - g_memory_base;

    if (offset > g_memory_size ||
        length > g_memory_size - static_cast<std::size_t>(offset)) {
        return nullptr;
    }

    return g_memory.get() + static_cast<std::size_t>(offset);
}

std::size_t GuestMemorySize() {
    std::lock_guard<std::mutex> lock(g_memory_mutex);
    return g_memory_size;
}

} // namespace moha::runtime
