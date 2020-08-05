#include <iostream>
#include <string>
#include <sstream>

int     main(void)
{
    std::string x;
    float p;
    int q;

    p = 0;
    q = 0;

    std::cout << "Enter here: ";
    getline (std::cin, x);
    std::stringstream(x) >> p;
    std::cout << "Enter more here: ";
    getline (std::cin, x);
    std::stringstream(x) >> q;
    std::cout << "Total is: " << p * q << std::endl;
    return (0);
}
