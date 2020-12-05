#include <iostream>
#include <functional>


char getCharacter()
{
    char character{};

    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> character;
    }
    while (character!='+' && character!='-' && character!='*' && character!='/');

    return character;
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

using ArithmeticFunction = std::function<int(int, int)>;

ArithmeticFunction getArithmeticFunction(char op)
{
	switch (op)
	{
	default: // default will be to add
	case '+': return add;
	case '-': return subtract;
	case '*': return multiply;
	case '/': return divide;
	}
}

int main()
{
    std::cout << "Enter integer value: ";
    int valueOne{};
    std::cin >> valueOne;

    std::cout << "Enter integer value: ";
    int valueTwo{};
    std::cin >> valueTwo;

    char character{getCharacter()};

    ArithmeticFunction fcn{ getArithmeticFunction(character) };
    std::cout << valueOne << ' ' << character << ' ' << valueTwo << " = " << fcn(valueOne, valueTwo) << '\n';

    /* std::cout << valueOne << ' ' << character << ' ' << valueTwo << " = ";

    if(character == '+')
    {
        std::cout << valueOne + valueTwo;
    }
    else if(character == '-')
    {
        std::cout << valueOne - valueTwo;
    }
    else if(character == '*')
    {
        std::cout << valueOne * valueTwo;
    }
    else if(character == '/')
    {
        std::cout << valueOne / valueTwo;
    }*/


    return 0;
}
