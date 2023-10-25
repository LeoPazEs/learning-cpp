#include <iostream>

int main()
{
    // Braced
    int elephant_count;                              // May contain garbage.
    int lion_count{};                                // 0
    int dog_count{10};                               // 10
    int cat_count{15};                               // 15
    int domesticated_animals{dog_count + cat_count}; // 25
    // int narrowing_conversion{2.9};

    // Functional
    int apple_count(5);
    int orange_count(5);
    int fruit_count(5);
    int narrowing_conversion_function(2.9); // Loses information -> 2
    std::cout << narrowing_conversion_function << std::endl;

    // Assignment
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // Loses information -> 2

    std::cout << narrowing_conversion_assignment << std::endl;

    std::cout << sizeof(narrowing_conversion_assignment) << std::endl;
    return 0;
}