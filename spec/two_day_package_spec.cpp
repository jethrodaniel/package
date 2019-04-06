#include "../vendor/Catch2/include/catch.hpp"

#include "spec_helper.cpp"

#include "../src/two_day_package.hpp"

SCENARIO("two_day_package") {
  GIVEN("a package") {
    const package::TwoDayPackage package(
      "Alexander Graham Bell",
      "84 Rainey Street",
      "Arlen",
      "Texas",
      "73104",

      "Dr. Watson",
      "84 Rainey Street",
      "Arlen",
      "Texas",
      "73104",

      16,
      8.786,

      12.3456
    );

    WHEN(".get_flat_fee") {
      REQUIRE(package.get_flat_fee() == 12.3456);
    }

    // Same test cases from the base class

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

    WHEN(".get_weight") {
      REQUIRE(package.get_weight() == 16);
    }

    WHEN(".get_cost_to_ship") {
      REQUIRE(package.get_cost_to_ship() == 8.786);
    }

    WHEN(".calculate_cost") {
      REQUIRE(package.calculate_cost() == 140.576);
    }
  }
}
