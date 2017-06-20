// Quick example dealing with primitive types
#include <iostream>

int main(int argc, char* argv[]) {
    float radix = 2.37;
    double pi = 3.14159;
    long double pval = 0.78430092337512227;
    bool condition = false;
    int i;      // declared but not initialized
    // constexpr - value is known at compile time and does not change for the life of the application
    // const - a runtime value that once assigned in the application should not change
    const int you_cant_change_me = 12;
    int const you_cant_change_me_either = pi;

    int ip = pi;
    std::cout << "double " << pi << " has been truncated to int " << ip << std::endl;
    std::cout << "uninitialized i = "
                << i
                << std::endl;
}
