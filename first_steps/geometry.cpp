// geometry.cpp file that contains the definitions for geometry.h
#include <cmath>
#include "geometry.h"

double calc_area_of_circle(double radius) {
    return 3.1415926535 * std::pow(radius, 2);
}

// just to get the code to compile, but when this file is used as a library, there should be no "main" method
int main() {
}
