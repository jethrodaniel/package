# package

This is a homework assignment, see the [assignment](assignment.pdf).

## Install/Usage

```
git clone --recurse-submodules https://github.com/jethrodaniel/package.git
cd package
make build && ./package # Build a simple `main` example
make spec               # Run the tests
```

## Demo

```
(ℂ)~> git clone --quiet --recurse-submodules https://github.com/jethrodaniel/package.git
(𝕀)~> cd package/
(𝕀)~> make build && ./package
Compiling source code into ./package
g++ -std=c++17 -g -pedantic -Wall -Wextra -Werror src/overnight_package.cpp src/two_day_package.cpp src/package.cpp './src/main.cpp' -o package
sender name: Alexander Graham Bell
sender address: 84 Rainey Street
sender city: Arlen
sender state: Texas
sender zip: 73104
receiver name: Dr. Watson
receiver address: 84 Rainey Street
receiver city: Arlen
receiver state: Texas
receiver zip: 73104
weight (oz): 16
shipping cost per ounce ($/oz): 8.786
TOTAL ($): 140.576
(𝕀)~> make spec
g++ -std=c++17 -Wall -I./spec/Catch2 -c './spec/setup.cpp' -o .setup.o
g++ src/overnight_package.cpp src/two_day_package.cpp src/package.cpp -std=c++17 -Wall -I./spec/Catch2 .setup.o ./spec/two_day_package_spec.cpp ./spec/overnight_package_spec.cpp ./spec/package_spec.cpp ./spec/spec_helper.cpp -o .spec.out
Running the specs...
./.spec.out
===============================================================================
All tests passed (44 assertions in 3 test cases)
```
