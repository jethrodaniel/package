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
(𝕀)~> git clone --recurse-submodules https://github.com/jethrodaniel/package.git
Cloning into 'package'...
remote: Enumerating objects: 105, done.
remote: Counting objects: 100% (105/105), done.
remote: Compressing objects: 100% (63/63), done.
remote: Total 105 (delta 59), reused 87 (delta 41), pack-reused 0
Receiving objects: 100% (105/105), 247.54 KiB | 784.00 KiB/s, done.
Resolving deltas: 100% (59/59), done.
Submodule 'vendor/Catch2' (https://github.com/catchorg/Catch2.git) registered for path 'vendor/Catch2'
Submodule 'vendor/bats' (https://github.com/bats-core/bats-core.git) registered for path 'vendor/bats'
Cloning into '/tmp/tmp.hIVH3jkVI1/package/vendor/Catch2'...
remote: Enumerating objects: 21821, done.
remote: Total 21821 (delta 0), reused 0 (delta 0), pack-reused 21821
Receiving objects: 100% (21821/21821), 11.47 MiB | 809.00 KiB/s, done.
Resolving deltas: 100% (14901/14901), done.
Cloning into '/tmp/tmp.hIVH3jkVI1/package/vendor/bats'...
remote: Enumerating objects: 6, done.
remote: Counting objects: 100% (6/6), done.
remote: Compressing objects: 100% (4/4), done.
remote: Total 1925 (delta 2), reused 6 (delta 2), pack-reused 1919
Receiving objects: 100% (1925/1925), 553.41 KiB | 803.00 KiB/s, done.
Resolving deltas: 100% (1055/1055), done.
Submodule path 'vendor/Catch2': checked out 'b77cec05c0b3a089e69a709e07c964ff842e5611'
Submodule path 'vendor/bats': checked out '8789f910812afbf6b87dd371ee5ae30592f1423f'
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
(𝕀)~> make spec
g++ -std=c++17 -Wall -I./spec/Catch2 -c './spec/setup.cpp' -o .setup.o
g++ src/overnight_package.cpp src/two_day_package.cpp src/package.cpp -std=c++17 -Wall -I./spec/Catch2 .setup.o ./spec/two_day_package_spec.cpp ./spec/overnight_package_spec.cpp ./spec/package_spec.cpp ./spec/spec_helper.cpp -o .spec.out
Running the specs...
./.spec.out
===============================================================================
All tests passed (44 assertions in 3 test cases)

(𝕀)~> make
Usage

  make COMMAND

COMMANDS

  build       Compiles the source code into an executable
  clean       Removes generated files, except .setup.o and .spec.out
  lint        Runs the linter
  style       Formats source and spec files to adhere to project standards
  spec        Runs the specs (c++)
  test        Runs the unit tests (sh)
  purge       Removes all generated files
```
