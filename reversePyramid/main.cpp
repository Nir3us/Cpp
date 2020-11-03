#include <iostream>



int main()
{
    int firstWhile{5};
    while(firstWhile >= 1)
    {

        int secondWhile{firstWhile};
        while(secondWhile >= 1)
        {
                std::cout << secondWhile-- << " ";

        }


        std::cout << '\n';
        firstWhile--;

    }
    return 0;
}
