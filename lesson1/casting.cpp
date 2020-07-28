#include <iostream>

//the type casting operator allows one to convert a given value to another type.

int     main(void)
{
    int x;
    float f;

    f = 3.14;
    x = (int)f;

    std::cout << x << std::endl;
    return (0);
}
