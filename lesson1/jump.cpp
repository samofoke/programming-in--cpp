#include <iostream>

/*
Jump statement allow altering the flow a program.
meaning you can break out the program when you want.
*/

int     main(void)
{
    for (int i = 5; i > 0; i--)
    {
        std::cout << i << std::endl;
        if (i == 4)
        {
            std::cout << "I can't continue sorry."<< std::endl;
            break ;
        }
    }
    return (0);
}
