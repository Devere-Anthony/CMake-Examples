#include <iostream>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("TEST")
{
    double x{2};
    REQUIRE((x*x) == 4);
}