#include <iostream>
#include "compare.hpp"

// You have to compile all the files.

double add(double a, double b);
void say_age(int age);
void say_age_pointer(int *age);
void say_age_reference(int& age);

int main(int argc, char const *argv[])
{
    double result = add(10, 20);
    std::cout << "result: " << result << std::endl;

    int max_result = max(10, 20);
    std::cout << "result: " << max_result << std::endl;

    int min_result = min(10, 20);
    std::cout << "result: " << min_result << std::endl;

    // Passing by value -> Makes a copy.
    int age = 10;
    std::cout << "BEFORE CALL AGE: " << age << std::endl;
    say_age(age);
    std::cout << "AFTER CALL AGE: " << age << std::endl;

    // Passing by pointer.
    std::cout << "BEFORE CALL POINTER AGE: " << age << std::endl;
    say_age_pointer(&age);
    std::cout << "AFTER CALL POINTER AGE: " << age << std::endl;

    // Passing by reference.
    std::cout << "BEFORE CALL REFERENCE AGE: " << age << std::endl;
    say_age_reference(age);
    std::cout << "AFTER CALL REFERENCE AGE: " << age << std::endl;

    return 0;
}

double add(double a, double b)
{
    return a + b;
}

// Passing by value -> Makes a copy.
void say_age(int age)
{
    ++age;
    std::cout << "CALL AGE: " << age << std::endl;
}

// Passing by pointer
void say_age_pointer(int *age)
{
    ++(*age);
    std::cout << "CALL POINTER AGE: " << *age << std::endl;
}

void say_age_reference(int& age)
{
    ++age;
    std::cout << "CALL REFERENCE AGE: " << age << std::endl;
}