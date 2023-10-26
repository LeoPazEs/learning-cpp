#include <iostream>

int main(int argc, char const *argv[])
{
    int number{22}; // Stack
    int *p_number{&number};

    int *p_number_heap{new int{33}}; // Alloc in heap
    std::cout << *p_number_heap << std::endl;

    delete p_number_heap;    // Free
    p_number_heap = nullptr; // Set fo null the pointer

    char *pBuffer = new char[1024];
    delete[] pBuffer;  // Freeing all elements
    pBuffer = nullptr; // Always set nullptr, so you can check it.

    if (pBuffer != nullptr)
    {
        std::cout << pBuffer << std::endl;
    }
    else
    {
        std::cout << "NULLPTR" << std::endl;
    }

    return 0;
}
