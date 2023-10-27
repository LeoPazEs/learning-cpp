#include <iostream>

int main(int argc, char const *argv[])
{
    size_t size{10};
    double *p_salaries{new double[size]};            // garbage
    int *p_students{new (std::nothrow) int[size]{}}; // 0
    double *p_scores{new (std::nothrow) double[size]{7, 2, 3, 4, 5}};
    for (size_t i{}; i < size; i++)
    {
        std::cout << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
    //std::size(p_scores); dont work
    // for(auto score:scores) dont work
    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;
    
    return 0;
}
