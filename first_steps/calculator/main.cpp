/*
    calc <num 1> op <num 2>
    returns the operation on the two numbers

*/
#include <iostream>
#include <string>

void print_usage(char* prog_name) {
    std::cout << prog_name << " <num 1> operation <num 2>" << std::endl;
}

void print_result(double result) {
    std::cout << "[RESULT]> " << result << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Error: invalid number of arguments, must be 4" << std::endl;
        print_usage(argv[0]);
        return 127;
    }
    double lhs = std::stod(argv[1]);
    std::string operation = argv[2];
    double rhs = std::stod(argv[3]);

    if (operation == "+") {
        print_result(lhs + rhs);
    } else {
        std::cerr << "Error: Operation '" << operation << "' NOT SUPPORTED" << std::endl;
    }
}
