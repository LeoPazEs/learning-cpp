#include <iostream>

double add(double a, double b);

int main(int argc, char const *argv[])
{
    double result = add(10, 20);
    std::cout << "result: " << result << std::endl;
    return 0;
}

double add(double a, double b){
    return a + b;
}
