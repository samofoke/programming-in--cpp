#include <iostream>

/*
examples of compound assignments
+=
-=
*=
/=
%=
>>=, <<=, &=, ^=, |=
*/

int     main(void)
{
    int a, b = 4;
    a = b;
    a += 6;
    std::cout << a <<std::endl;
    return (0);
}
