// This will be the unittest driver
#include <UnitTest++.h>
#include "celsius_to_fahrenheit_test.hpp"

int main(int argc, char* argv[]) {
    // We call this method to call all the unit tests that have been registered
    return UnitTest::RunAllTests();
}
