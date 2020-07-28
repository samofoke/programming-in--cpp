#include <iostream>

int     main(void)
{
    int a, b, c, d, e;

    a = 3;
    b = 6;

    c = (b < a) ? a : b;
    d = (a == b) ? a : b;
    e = (a < b) ? a : b;

    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    return (0);
}
