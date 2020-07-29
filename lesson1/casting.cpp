#include <iostream>

//the type casting operator allows one to convert a given value to another type.

int     main(void)
{
    int x;
    float f;
    char s;
    s = 'a';

    f = 3.14;
    x = (int)f;
    s = sizeof (char);

    std::cout << x << std::endl;
    std::cout << s << std::endl;
    printf("%d\n", s);
    return (0);
}
