// Dealing with operators
#include <iostream>

#define STR(x) #x
#define PRINT_INT_EXPR(expr) (fprintf(stdout, "%s -> %d\n", STR(expr), (expr)))
#define PRINT_DOUBLE_EXPR(expr) (fprintf(stdout, "%s -> %f\n", STR(expr), (expr)))

int main(int argc, char* argv[]) {
    double a = 3.25;
    double b = 4.75;
    double c = 1.25;

    // The following will not compile because the expression returning type is double
    // PRINT_INT_EXPR(a + b + c);
    PRINT_DOUBLE_EXPR(a + b + c);
}
