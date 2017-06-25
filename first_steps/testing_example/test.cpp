// Test file
#include "temp_converter.hpp"
using c2f = celsius_to_fahrenheit;

void test_celsius_to_fahrenheit(double celsius) {
    // TDD rule: only 1 test per method, but we run a few of them for brevity purposes
    ASSERT_TRUE(c2f(15) == 59.0);
    ASSERT_TRUE(c2f(19) == 66.2);
    ASSERT_TRUE(c2f(23) == 73.4);
}
