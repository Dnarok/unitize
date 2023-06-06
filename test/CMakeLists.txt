project(ulib_test)

add_executable(ulib_test
    dimension_test.cpp
    unit_test.cpp
)

target_link_libraries(ulib_test 
    INTERFACE ulib
    PRIVATE Catch2::Catch2WithMain
)

target_include_directories(ulib_test PUBLIC
    ../include
)