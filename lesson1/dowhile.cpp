#include <iostream>

int     main(void)
{
    std::string str;

    do{
        std::cout << "Enter: ";
        getline(std::cin, str);
        std::cout << "Is this right: "<< str << std::endl;
      }
      while (str != "hello");
      {
          std::cout << "Yes you got it right." << std::endl;
      }
      return (0);
}
