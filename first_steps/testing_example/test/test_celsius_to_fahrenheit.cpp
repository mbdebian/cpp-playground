// Test file
// compile command used for this unittest:
// g++ -std=gnu++11 -pthread -I . -I ../src -I /usr/local/libunittest-9.3.4/include -lunittest -L /usr/local/libunittest-9.3.4/lib test_celsius_to_fahrenheit.cpp -o c2f
#include <libunittest/all.hpp>
#include "temp_converter.hpp"

//using namespace unittest::assertions;

// This is a 'macro' that creates a test
// SPOT is a keyword in libunittest, that, when the test fails, refer to SPOT to point us where the test fails
TEST(test_celsius_to_fahrenheit) {
    unittest::assertions::assert_true(celsius_to_fahrenheit(15) == 59.0, SPOT);
}
