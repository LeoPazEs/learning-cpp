#include <iostream>

int addNumbers(int first_number, int second_number)
{
    return first_number + second_number;
}

int main(){
    int first_number {3};
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;
    std::cout << "Sum : " << addNumbers(first_number, second_number) << std::endl;

    return 0;
}
