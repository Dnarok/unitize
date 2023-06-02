cmake_minimum_required(VERSION 3.26)
set(CMAKE_CXX_STANDARD 20)

project(ulib)

add_subdirectory(external)
add_subdirectory(test)

add_library(ulid SHARED
    include/dimension.hpp

    source/dimension.cpp
)