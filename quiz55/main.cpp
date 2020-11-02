#include <iostream>




int main()
{
    int firstWhile{ 1 };
    while(firstWhile <= 5)
    {

        int secondWhile{ 5 };
        while(secondWhile >= 1)
        {

            if(secondWhile <= firstWhile)
                std::cout << secondWhile << ' ';
            else
                std::cout << "  ";


            --secondWhile;

        }

        std::cout<< '\n';
        firstWhile++;
    }


    return 0;
}
