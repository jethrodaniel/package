#include "../vendor/Catch2/include/catch.hpp"

#include "spec_helper.cpp"

#include "../src/package.hpp"

SCENARIO("package") {
  GIVEN("a package") {
    const package::Package package("Alexander Graham Bell",
      "84 Rainey Street"
    );

    WHEN( ".get_sender_name" ) {
      REQUIRE(package.get_sender_name() == "Alexander Graham Bell");
    }

    WHEN( ".get_sender_address" ) {
      REQUIRE(package.get_sender_address() == "84 Rainey Street");
    }

    //WHEN( ".sender_city" ) {
    //  REQUIRE(package.sender_address() == "Arlen");
    //}

    //WHEN( ".sender_state" ) {
    //  REQUIRE(package.sender_state() == "Texas");
    //}

    //WHEN( ".sender_zip" ) {
    //  REQUIRE(package.sender_zip() == "78104");
    //}
  }
}
