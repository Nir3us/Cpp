#include <iostream>

int DepthNumber{ 0 };

void inBinary(unsigned int y)
{

    if(y > 1)
    {
    inBinary(y/2);
    }
    std::cout << y%2;

}

int main()
{
    std::cout << "Enter number you would like to see in binary: ";
    unsigned int number{ };
    std::cin >> number;

    inBinary(number);

    return 0;
}
