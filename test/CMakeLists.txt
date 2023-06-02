project(ulib_test)

add_executable(ulib_test
    dimension_test.cpp
)

target_link_libraries(ulib_test 
    PUBLIC ulib
    PRIVATE Catch2::Catch2WithMain
)

target_include_directories(ulib_test PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)