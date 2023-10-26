#include <iostream>

int main(int argc, char const *argv[])
{
    int *p_number{};               // Same size
    double *p_fractional_number{}; // Same size

    int *p_null{nullptr}; // Initializing to null

    std::cout << p_number << std::endl;
    std::cout << p_null << std::endl;

    int var{43};
    int *pointer_var{&var};
    std::cout << pointer_var << std::endl;
    std::cout << *pointer_var << std::endl;

    /*
    int var{43};
    double *pointer_var{&var}; compile error, pointer has to be in the same type.
    */

    // char *p_message{"Hello World!"}; // Array of const char, compile error
    const char *p_message{"Hello World!"}; // Array of const char
    std::cout << p_message << std::endl;
    std::cout << *p_message << std::endl;

    return 0;
}
