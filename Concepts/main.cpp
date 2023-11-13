#include <iostream>
#include <concepts>

/*
template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}
*/

// Create your own concept
template <typename T>
concept Multipliable = requires(T a, T b) {
    a *b; // Just check valid syntax
};

template <typename T>
T add(T a, T b)
    requires std::integral<T>
{
    return a + b;
}

template <typename T>
T mult(T a, T b)
    requires Multipliable<T>
{
    return a * b;
}

//Compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
	//noexcept is optional
	{a + b} -> std::convertible_to<int>; //Compound requirement
	//Checks if a + b is valid syntax, doesn't throw expetions(optional) , and the result
	//is convertible to int(optional)
};

template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4; // Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements
};

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
    std::cout << "result_c : " << result_c << std::endl;

    int d_0{10};
    int d_1{20};
    auto result_d = mult(d_0, d_1);
    std::cout << "result_d : " << result_d << std::endl;

    /*
    std::string e_0{10};
    std::string e_1{20};
    auto result_e = mult(e_0, e_1);
    std::cout << "result_e : " << result_e << std::endl;
    */

    return 0;
}
