#include <iostream>

int main()
{
    // size_t == unsigned int
    for (size_t i{}; i < 10; ++i)
    {
        std::cout << "My number is : " << i << std::endl;
    }

    const size_t COUNT{10};
    size_t i{};

    while (i < COUNT)
    {
        std::cout << i << " WHILE" << std::endl;
        ++i;
    }

    do
    {
        std::cout << i << " DO WHILE" << std::endl;
    } while (i < COUNT);

    return 0;
}
