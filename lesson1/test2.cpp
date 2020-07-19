#include <iostream>

int     main(void)
{
    int a = 12; // c like initialization.
    int b(4); // constructor initialization.
    int c{3}; // uniform initialization.
    int result;

    a = a + b;
    result = a - c;
    std::cout<<result<<std::endl;
    return (0);
}
