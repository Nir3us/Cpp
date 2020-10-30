#include <iostream>
#include <cstdlib>

void calculate(int x, int y, char c)
{

    switch(c)
    {
    case '+':
        {
            std::cout << x + y << '\n';
            break;
        }
    case '-':
        {
            std::cout << x - y << '\n';
            break;
        }
    case '/':
        {
            std::cout << static_cast<double>(x) / static_cast<double>(y) << '\n';
            break;
        }
    case '*':
        {
            std::cout << x * y << '\n';
            break;
        }
    case '%':
        {
        std::cout << x%y << '\n';
        break;
        }
    default:
        {
            std::cout << "Error!!!\n";
            break;
        }

    }

}


int main()
{
    std::cout << "Enter integer: ";
    int abc{ };
    std::cin >> abc;

    std::cout << "Enter integer: ";
    int efg{ };
    std::cin >> efg;

    std::cout << "If you want to add this two integers write + if you want to subtract write -\n if you want to divide write if you want to multiply"
                            "write * if you want modulus write %:";
    char hij{ };
    std::cin >> hij;

    std::cout << abc << ' ' << hij << ' ' << efg << " is " << calculate(abc, efg, hij) << '\n';


    return 0;
}
