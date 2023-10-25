#include <iostream>
#include <string>

void getFullNameAndAge()
{
    int age3;
    std::string full_name;

    std::cout << "Enter your age and name:" << std::endl;
    std::cin >> age3;
    std::cin.ignore(); // Ignoring newline in input stream from the cin before
    std::getline(std::cin, full_name);

    std::cout << "Your name is " << full_name
              << " and your age is " << age3 << std::endl;
}

int main()
{
    /*
    int age {21};

    std::cout << "Hello World! My age is " << age << std::endl;
    std::cerr << "Hello Error!" << std::endl;
    std::clog << "Hello Log!" << std::endl;
    */

    /*
    int age1;
    std::string name;

    std::cout << "Enter your age and name:" << std::endl;
    std::cin >> age1;
    std::cin >> name;
    std::cin >> age1 >> name;
    std::cout << "Your name is " << name << " and your age is " << age1 << std::endl;
    */

    getFullNameAndAge();
    return 0;
}
