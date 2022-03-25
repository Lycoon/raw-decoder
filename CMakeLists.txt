cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 17)

project(raw)

include_directories(
        core
)

file(GLOB all_SRCS
        "core/include/*.hh"

        "core/*.cc"

        main.cc
)

add_executable(raw ${all_SRCS})