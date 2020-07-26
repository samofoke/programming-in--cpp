#include <iostream>

//example of using constant types in C++.

const double pi = 3.14159;
const char n = '\n';

int     main(void)
{
    double r = 5.0;
    double c;

    c = 2 * pi * r;
    std::cout << c;
    std::cout << n;
}
