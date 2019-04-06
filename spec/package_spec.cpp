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
      "73104",

      16,
      8.786
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

    WHEN(".get_weight") {
      REQUIRE(package.get_weight() == 16_a);
    }

    WHEN(".get_shipping_cost_per_ounce") {
      REQUIRE(package.get_shipping_cost_per_ounce() == 8.786_a);
    }

    WHEN(".calculate_cost") {
      REQUIRE(package.calculate_cost() == 140.576_a);
    }

    WHEN(".to_s") {
      std::string expected =
        "sender name: Alexander Graham Bell\n"
        "sender address: 84 Rainey Street\n"
        "sender city: Arlen\n"
        "sender state: Texas\n"
        "sender zip: 73104\n"
        "receiver name: Dr. Watson\n"
        "receiver address: 84 Rainey Street\n"
        "receiver city: Arlen\n"
        "receiver state: Texas\n"
        "receiver zip: 73104\n"
        "weight (oz): 16\n"
        "shipping cost per ounce ($/oz): 8.786\n"
        "TOTAL ($): 140.576\n";

      REQUIRE(package.to_s() == expected);
    }
  }
}
