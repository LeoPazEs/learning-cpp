#include <iostream>

//  Overloarding
int max(int a, int b)
{
    std::cout << "Overload int" << std::endl;
    return a > b ? a:b;
}

double max(double a, double b)
{
    std::cout << "Overload doudle" << std::endl;
    return a > b ? a:b;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}