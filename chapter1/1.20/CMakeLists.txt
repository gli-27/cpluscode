cmake_minimum_required(VERSION 3.14)
project(1_20)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(1_20
        main.cpp
        Sales_item.h)
