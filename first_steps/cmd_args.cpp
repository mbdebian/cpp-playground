// Dealing with command line arguments
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Total arguments: " << argc << std::endl;
    std::cout << "Program name: " << argv[0] << std::endl;
    std::cout << "Program arguments:" << std::endl;
    for (size_t i = 0; i < argc; i++) {
        std::cout << "\t" << i << " ---> " << argv[i] << std::endl;
    }
}
