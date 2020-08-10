#include <iostream>

/*
this for loop is used for exclusively for ranges

for (declaration : range) statement;
*/

int     main(void)
{
    std::string s {"Hi it's a great day."};
    for (char i : s)
    {
        std::cout << "{"<< i <<"}"<< std::endl;
    }
    return (0);
}
