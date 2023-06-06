#include <catch2/catch_test_macros.hpp>
#include "unit.hpp"

#include <type_traits>
#include <concepts>

TEST_CASE("unit is variously constructible.", "[unit]")
{
    STATIC_REQUIRE(std::is_default_constructible_v<ulib::unit<ulib::dimension{}, 1.0>>);
    STATIC_REQUIRE(std::is_copy_constructible_v<ulib::unit<ulib::dimension{}, 1.0>>);
    STATIC_REQUIRE(std::is_move_constructible_v<ulib::unit<ulib::dimension{}, 1.0>>);
    STATIC_REQUIRE(std::is_constructible_v<ulib::unit<ulib::dimension{}, 1.0>, double>);
};