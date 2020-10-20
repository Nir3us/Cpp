#include <iostream>

double getNumber()
{
    std::cout << "Enter a number with decimal extension (for example 3.0) : ";
    double x{ };
    std::cin >> x;
    return x;
}

void functionAdd(double x, double y)
{
    std::cout << x+y;
    //return x + y;
}

void functionMinus(double x, double y)
{
    std::cout << x-y;
    // return x - y;
}

void functionMultiplication(double x, double y)
{
    std::cout << x*y;
    //return x * y;
}

void functionDivision(double x, double y)
{
    std::cout << x/y;
    // return x / y;
}

char charValue()
{
    std::cout << "Enter '+' if you want to add these 2 numbers write '-' if you want to subtract number 1 from number 2, \n"
                        "write '*' if you want to multiply them or '/' if you want to divide them: ";
    char x{ };
    std::cin >> x;
    return x;
}

int main()
{
    double firstNumber{ getNumber() };
    double secondNumber{ getNumber() };

    char ifUsingChar(charValue());

    if( ifUsingChar == '+' )
    {
        functionAdd(firstNumber, secondNumber);
    }
    else  if( ifUsingChar == '-' )
    {
        functionMinus(firstNumber, secondNumber);
    }
    else  if( ifUsingChar == '*' )
    {
        functionMultiplication(firstNumber, secondNumber);
    }
    else  if( ifUsingChar == '/' )
    {
        functionDivision(firstNumber, secondNumber);
    }
    else { std::cout << "Your char is incorrect.\n"; }



    return 0;
}
