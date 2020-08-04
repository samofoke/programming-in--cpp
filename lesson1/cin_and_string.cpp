#include <iostream>


//it extracts the characters from is and stores them into
//a string until the delim is found.

int	main(void)
{
	std::string x;
	std::cout << "which language do you like: ";
	getline (std::cin, x);
	std::cout << "I really enjoy " + x << std::endl;
	return (0);
}
