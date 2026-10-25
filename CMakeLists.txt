
cmake_minimum_required(VERSION 3.22.1)

project(MedalOfHonorAndroid LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(moha_android SHARED
    src/main.cpp
)

file(GLOB MOHA_RECOMP_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/recompiled/*.c"
)

target_sources(moha_android PRIVATE ${MOHA_RECOMP_SOURCES})

target_include_directories(moha_android PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/recompiled"
)

set_source_files_properties(${MOHA_RECOMP_SOURCES}
    PROPERTIES LANGUAGE C
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_library(android-log log)

target_compile_definitions(moha_android PRIVATE
    MOHA_ANDROID_ARM64=1
)

target_link_libraries(moha_android
    ${android-log}
)
