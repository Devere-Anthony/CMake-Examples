/* test.cc - simple example to drive using a header-only file */
#define CATCH_CONFIG_MAIN
#include <iostream>
#include <catch.hpp>

TEST_CASE("TEST")
{
    double x{2};
    REQUIRE((x*x) == 4);
}
