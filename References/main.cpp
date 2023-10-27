#include <iostream>

int main(int argc, char const *argv[])
{
    int int_data{33};
    int other_int_data{50};
    double double_data{55};

    int& ref_int_data{int_data};
    double& ref_double_data{double_data}; // cant make a reference refer to something else 
    int *p_int_data{&int_data};

    int_data = 30;
    std::cout <<  ref_int_data << std::endl;

    ref_int_data = 33;
    std::cout << int_data << std::endl;
    std::cout << p_int_data << std::endl;
    std::cout << *p_int_data << std::endl;

    *p_int_data = 25;
    std::cout << *p_int_data << std::endl;

    ref_int_data = other_int_data; // This is ASSIGNING the value of other_int_data to int_data
    std::cout << int_data << std::endl;

    // Const Ref
    const int& const_ref_int_data {int_data};
    // const_ref_int_data = 10; compile error

    //Const pointer 
    const int* const const_ptr_to_const{&int_data}; // Const pointer that poinst to a const variable
    const int* const_ptr{&int_data}; // Const pointer to not const variable


    return 0;
}
