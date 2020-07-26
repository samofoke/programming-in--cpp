#include <iostream>

//the basics of operators in C++.

int     main(void)
{
    int a, b;
    a = 10;
    b = 5;
    a = b;
    b = 4;

    std::cout << "a: ";
    std::cout << a;
    std::cout << " b: ";
    std::cout << b;
    std::cout << '\n';
    return (0);
}
