#include <iostream>

float   average(int *l, int n)
{
    float sum = 0.0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + l[i];
    }
    float avg = sum / n;

    return avg;
}


int main()
{
    int s[] = {3, 20, 6, 8, 10, 13, 2, 4, 16};
    int d = 5;

    std::cout << "the answer is: "<< average(s, d) <<std::endl;
    return (0);
}
