#include "math.h"
#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    double x;
    std::cin >> x;

    try
    {
        if (x < 0.0)
            throw "Can not take sqrt of negative number";

        std::cout << "The sqrt of " << x << " is " << sqrt(x) << '\n';
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }
}
