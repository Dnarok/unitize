#include <catch2/catch_test_macros.hpp>
#include "dimension.hpp"

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
    STATIC_REQUIRE(std::equality_comparable<ulib::dimension>);
};

TEST_CASE("dimension can have arithmetic done on it.", "[dimension]")
{
    ulib::dimension A{ 1, 0, 0, 0, 0, 0, 0 };
    ulib::dimension B{ 1, 0, 0, 0, 0, 0, 0 };

    ulib::dimension C = A * B;
    REQUIRE(C.L == 2);

    ulib::dimension D = A / B;
    REQUIRE(D.L == 0);

    ulib::dimension E = C * A;
    REQUIRE(E.L == 3);

    ulib::dimension F{ 0, 1, 0, 0, 0, 0, 0 };
    ulib::dimension G = C * F;
    REQUIRE(G.L == 2);
    REQUIRE(G.M == 1);

    ulib::dimension H = A / F;
    REQUIRE(H.L == 1);
    REQUIRE(H.M == -1);
};