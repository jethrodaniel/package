#include "../vendor/Catch2/include/catch.hpp"

#include "spec_helper.cpp"

#include "../src/package.hpp"

SCENARIO("package") {
  GIVEN("a package") {
    package::Package example;

    REQUIRE(example.example() == 1);

    WHEN( "" ) {
      THEN( "" ) {
        REQUIRE(true == true);
      }
    }
  }
}
