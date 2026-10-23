
cmake_minimum_required(VERSION 3.22.1)

project(MedalOfHonorAndroid LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(moha_android SHARED
    src/main.cpp
)

find_library(android-log log)

target_compile_definitions(moha_android PRIVATE
    MOHA_ANDROID_ARM64=1
)

target_link_libraries(moha_android
    ${android-log}
)
