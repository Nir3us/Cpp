#include <iostream>



int main()
{
    std::cout << "How many rows do you want your pyramid to have? ";
    int pyramidCount{0};
    std::cin >>pyramidCount;

    int firstWhile{0};
    while(firstWhile <=pyramidCount)
    {
        int secondWhile{0};
        while(secondWhile <= firstWhile )
        {
            std::cout << '#';
            secondWhile++;
        }
        firstWhile++;
        std::cout << '\n';
    }
    return 0;
}
