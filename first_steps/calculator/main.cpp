/*
    calc <num 1> op <num 2>
    returns the operation on the two numbers

*/
#include <iostream>

void print_usage(char* prog_name) {
    std::cout << prog_name << " <num 1> operation <num 2>" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Error: invalid number of arguments, must be 4" << std::endl;
        print_usage(argv[0]);
    }

}
