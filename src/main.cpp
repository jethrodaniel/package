#include <iostream>

#include "package.hpp"

//int main(int argc, char **argv) {

using namespace std::string_literals;

int main() {
  package::Package package(
    "Alexander Graham Bell"s,
    "84 Rainey Street"s,
    "Arlen"s,
    "Texas"s,
    "73104"s,

    "Dr. Watson"s,
    "84 Rainey Street"s,
    "Arlen"s,
    "Texas"s,
    "73104"s,

    16,
    8.786
  );

  std::cout << package;
}

