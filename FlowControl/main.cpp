#include <iostream>
#include <string>

// Tools
const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int main()
{
    // IF
    if (false == true)
    {
        std::cout << "TEST";
    }
    else if (true == true)
    {
        std::cout << "TEST ELSE IF" << std::endl;
    }
    else
    {
        std::cout << "TEST 1 " << std::endl;
    }

    // SWITCH
    int tool {Eraser};

    /*
    // Condition can only be integral or  enum 
    std::string name {"John"};
    switch (name) // Compiler error!
    {
    
    }
    */
    switch (tool)
    {
        case Pen : {
             std::cout << "Active tool is Pen" << std::endl;
        }
        break;

        case Marker : {
             std::cout << "Active tool is Marker" << std::endl;
        }
        break;


        case Eraser :
        case Rectangle : 
        case Circle : {
             std::cout << "Drawing Shapes" << std::endl;
        }
        break;

        case Ellipse : {
             std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;
    
        default: {
            std::cout << "No match found" << std::endl;
        }
            break;
    }

    // Ternary Expression
    // result has to be same type or convertible
    bool result = false == true ? true:false;
    std::cout << result << std::endl;


    return 0;
}
