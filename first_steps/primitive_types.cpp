// Quick example dealing with primitive types
#include <iostream>

int main(int argc, char* argv[]) {
    float radix = 2.37;
    double pi = 3.14159;
    long double pval = 0.78430092337512227;
    bool condition = false;
    int i;      // declared but not initialized

    int ip = pi;
    std::cout << "double " << pi << " has been truncated to int " << ip << std::endl;
    std::cout << "uninitialized i = "
                << i
                << std::endl;
}
