#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "My number is : " << i << std::endl;
    }
    

    return 0;
}
