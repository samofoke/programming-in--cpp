#include <iostream>

int	main(void)
{	
	int x;

	std::cout << "Enter your number: ", std::cin >> x;
	while (x > 0)
    {
        if (x != '\0')
        {
            std::cout << x << std::endl;
            --x;
        }
    }

    std::cout << "it is done..." << std::endl;
    return (0);
}
