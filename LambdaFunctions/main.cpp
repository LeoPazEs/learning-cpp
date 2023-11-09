#include <iostream>

int main(int argc, char const *argv[])
{
    auto func = []()
    { std::cout << "Lambda Lambda Lambda nerds!" << std::endl; };
    func();

    [](double a, double b) -> void
    { std::cout << "a + b = " << (a + b) << std::endl; }(12.5, 5.7);

    auto func1 = [](double a, double b) -> double // Cannot type the func1
    { return a + b; };
    std::cout << func1(10.5, 20.5) << std::endl;

    double result = func1(11.5, 12.5);
    std::cout << result << std::endl;

    // Capture list by value
    int c{42};
    auto func_value = [c]() -> void
    { std::cout << c << std::endl; };
    // Capture list all by value
    auto func_value_all = [=]() -> void
    { std::cout << c << std::endl; };
    // Capture list by refence
    auto func_reference = [&c]() -> void
    { std::cout << c << std::endl; };
    // Capture list all by refence
    auto func_reference_all = [&]() -> void
    { std::cout << c << std::endl; };

    std::cout << "--------------------" << std::endl;
    for (size_t i = 0; i < 6; ++i)
    {
        func_value();
        func_value_all();
        func_reference();
        func_reference_all();
        ++c;
        std::cout << "--------------------" << std::endl;
    }

    return 0;
}
