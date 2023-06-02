#include <catch_amalgamated.hpp>
#include <dimension.hpp>

#include <type_traits>
#include <concepts>

TEST_CASE("dimension is variously constructible.", "[dimension]")
{
    STATIC_REQUIRE(std::is_default_constructible_v<ulib::dimension>);
    STATIC_REQUIRE(std::is_copy_constructible_v<ulib::dimension>);
    STATIC_REQUIRE(std::is_move_constructible_v<ulib::dimension>);
    STATIC_REQUIRE(std::is_constructible_v<ulib::dimension, int, int, int, int, int, int, int>);
};

TEST_CASE("dimension is equality-comparable.", "[dimension]")
{
    STATIC_REQUIRE(std::equality_comparable<dimension>);
};

TEST_CASE("dimension can have arithmetic done on it.", "[dimension]")
{
    ulib::dimension A{ 1, 0, 0, 0, 0, 0, 0 };
    ulib::dimension B{ 1, 0, 0, 0, 0, 0, 0 };
};