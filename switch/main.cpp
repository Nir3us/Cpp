#include <iostream>
#include <cstdlib>


bool isDigit(char c)
{
    switch (c)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
        default:
            return false;
    }
}

int main()
{
    std::cout << "Enter char: ";
    char something;
    std::cin >> something;
    if(isDigit(something))
    {
        std::cout << "Your char is digit!\n";
    }
    else
    {
        std::cout << "Your char is not digit!\n";
    }




    int x{ 0 };
    switch(x)
    {
    case 0:
        {
            x++;
            std::cout << "Does ";
            break;
        }
    case 1:
        {
            x++;
            std::cout << "this ";
            break;
        }
    case 2:
        {
            x++;
            std::cout << "really ";
            break;
        }
    case 3:
        {
            x++;
            std::cout << "works ";
            break;
        }
    case 4:
        {
            x++;
            std::cout << "?\n";
            break;
        }

    }




    return 0;
}
