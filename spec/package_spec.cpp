#include "../vendor/Catch2/include/catch.hpp"

#include "spec_helper.cpp"

#include "../src/package.hpp"

SCENARIO("package") {
  GIVEN("a package") {
    const package::Package package(
      "Alexander Graham Bell",
      "84 Rainey Street",
      "Arlen",
      "Texas",
      "73104",

      "Dr. Watson",
      "84 Rainey Street",
      "Arlen",
      "Texas",
      "73104"
    );

    WHEN(".get_sender_name") {
      REQUIRE(package.get_sender_name() == "Alexander Graham Bell");
    }

    WHEN(".get_sender_address") {
      REQUIRE(package.get_sender_address() == "84 Rainey Street");
    }

    WHEN(".get_sender_city") {
      REQUIRE(package.get_sender_city() == "Arlen");
    }

    WHEN(".get_sender_state") {
      REQUIRE(package.get_sender_state() == "Texas");
    }

    WHEN(".get_sender_zip") {
      REQUIRE(package.get_sender_zip() == "73104");
    }

    WHEN(".get_receiver_name") {
      REQUIRE(package.get_receiver_name() == "Dr. Watson");
    }

    WHEN(".get_receiver_address") {
      REQUIRE(package.get_receiver_address() == "84 Rainey Street");
    }

    WHEN(".get_receiver_city") {
      REQUIRE(package.get_receiver_city() == "Arlen");
    }

    WHEN(".get_receiver_state") {
      REQUIRE(package.get_receiver_state() == "Texas");
    }

    WHEN(".get_receiver_zip") {
      REQUIRE(package.get_receiver_zip() == "73104");
    }
  }
}
