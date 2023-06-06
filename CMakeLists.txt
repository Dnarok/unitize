cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 20)

project(ulib)

add_subdirectory(external)
add_subdirectory(test)

add_library(ulib INTERFACE)
target_sources(ulib INTERFACE
    include/dimension.hpp
    include/derived_dimensions.hpp
    include/unit.hpp
)