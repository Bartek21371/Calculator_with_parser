cmake_minimum_required(VERSION 4.0)
project(Calculator_with_parser)

set(CMAKE_CXX_STANDARD 20)
add_executable(Calculator_with_parser main.cpp
        cmake-build-debug/src/calculator.cpp)

target_include_directories(Calculator_with_parser PUBLIC include)
