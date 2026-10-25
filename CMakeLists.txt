cmake_minimum_required(VERSION 3.22.1)

project(MedalOfHonorAndroid LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(moha_recompiled STATIC)

file(GLOB MOHA_RECOMP_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/recompiled/*.c"
)

target_sources(moha_recompiled PRIVATE
    ${MOHA_RECOMP_SOURCES}
)

target_include_directories(moha_recompiled PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/recompiled"
)

add_library(moha_android SHARED
    src/main.cpp
    app/src/main/cpp/runtime/xbox_guest_memory.cpp
    app/src/main/cpp/runtime/game_profile.cpp
)

target_include_directories(moha_android PRIVATE
    app/src/main/cpp/runtime
)

find_library(android-log log)

target_compile_definitions(moha_android PRIVATE
    MOHA_ANDROID_ARM64=1
)

target_link_libraries(moha_android PRIVATE
    moha_recompiled
    ${android-log}
)

# Fail the Android shared-library link if runtime symbols are unresolved.
target_link_options(moha_android PRIVATE
    "-Wl,--no-undefined"
)
