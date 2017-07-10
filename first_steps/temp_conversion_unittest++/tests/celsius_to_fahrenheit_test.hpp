#ifndef CELSIUS_TO_FAHRENHEIT_TEST_HPP
#define CELSIUS_TO_FAHRENHEIT_TEST_HPP

#include <UnitTest++.h>

SUITE(TemperatureConversionTests) {
    TEST(test_celsius_to_fahrenheit) {
        CHECK(celsius_to_fahrenheit(15) == 59.0);
    }
}

#endif // CELSIUS_TO_FAHRENHEIT_TEST_HPP
