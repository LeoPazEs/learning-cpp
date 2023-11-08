#include <iostream>

int main(int argc, char const *argv[])
{
    auto func = []()
    { std::cout << "Lambda Lambda Lambda nerds!" << std::endl; };
    func();

    [](double a, double b) -> void
    { std::cout << "a + b = " << (a + b) << std::endl; }(12.5, 5.7);

    return 0;
}
