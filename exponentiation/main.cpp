#include <iostream>

long double exponentiationFunction(double x, int y)
{

    long double sum{1};

    for(int firstFor{1}; firstFor <= y; firstFor++)
        {
            if(y==0)
            {
                return 1;
            }
            else
            {
                sum *= x;
            }

        }
        return sum;
}

int main()
{
    std::cout << "Enter value: ";
    double firstValue;
    std::cin >> firstValue;

    std::cout << "How many times do you want to exponentiation your value? ";
    int exponentiationValue;
    std::cin >> exponentiationValue;


     long double answear{exponentiationFunction(firstValue, exponentiationValue)};

    std::cout << firstValue << " to " << exponentiationValue << " is " << answear << '\n';


    return 0;
}
