#include <iostream>

int main()
{
    int scores[10];

    //std::cout << scores[200] << std::endl;  Acessa outra parte da memoria, não existe key error aqui :S

    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i;
    }
    for (int score : scores)
    {
        std::cout << score << std::endl;
    }

    int numbers[10];
    int count {std::size(numbers)};
    for (size_t i{0}; i < count; i++)
    {
        std::cout << i << std::endl;
    }
    

    char message[6]{'H', 'E', 'L', 'L', 'O'}; //  Needs to be 6, the null character
    char message2[]{"Hello World"}; // Better

    std::cout << message << std::endl;
    std::cout << message2 << std::endl;

    return 0;
}
