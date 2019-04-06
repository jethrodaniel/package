#include <iostream>

#include "package.hpp"

//int main(int argc, char **argv) {
int main() {
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

  std::string output = package.to_s();

  std::cout << output;
}

