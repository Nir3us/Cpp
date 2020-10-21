#include <iostream>

bool isEven(int x)
{
    if(x%2 == 0)
    {
            return true;
    }
    else
    {
            return false;
    }
}

int main()
{
    std::cout << "Enter integer: ";
    int numOne{ };
    std::cin >> numOne;

    if(isEven(numOne))
    {
        std::cout << numOne << " is even.\n";
    }
    else
    {
        std::cout << numOne << " is not even.\n";
    }
    return 0;
}
