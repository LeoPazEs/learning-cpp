#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

int main(int argc, char const *argv[])
{
    char a_0{10};
    char a_1{20};
    auto result_a = add(a_0, a_1);
    std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;

    /*
    Error pq nao ẽ um integral-> 
    double b_0{10.1};
    double b_1{20.2};
    auto result_b = add(b_0, b_1);
    std::cout << "result_b : " << static_cast<int>(result_b) << std::endl;
    */

    int c_0{10};
    int c_1{20};
    auto result_c = add(c_0, c_1);
    std::cout << "result_c : " << static_cast<int>(result_c) << std::endl;




    
    return 0;
}
