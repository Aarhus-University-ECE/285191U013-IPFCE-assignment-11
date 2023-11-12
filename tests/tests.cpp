#include <catch2/catch_test_macros.hpp>

extern "C" {
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// Use REQUIRE() instead of assert() to check the results.

TEST_CASE("sumtail") {
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(1 == 2);
}

TEST_CASE("sumwhile") {
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(1 == 2);
}

// DO NOT MODIFY THE TESTS IN TEST_CASE("sumn")
TEST_CASE("sumn") {
    REQUIRE(sumn(1) == 1);     // sum(1) must be 1
    REQUIRE(sumn(3) == 9);     // sum(3)  = 1+3+5 = 9
    REQUIRE(sumn(33) == 1089); // sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib") {
    // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(1 == 2);
}


