#include <iostream>

int main()
{
    int number_decimal = 15;
    int number_octal = 017;
    int number_hex = 0x0f;
    int number_bin = 0b00001111;

    std::cout << "Number Decimal: " << number_decimal << std::endl;
    std::cout << "Number Octal: " << number_octal << std::endl;
    std::cout << "Number Hex: " << number_hex << std::endl;
    std::cout << "Number Binary: " << number_bin << std::endl;

    return 0;
}
