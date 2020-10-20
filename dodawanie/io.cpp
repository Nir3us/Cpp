#include <iostream>


int readNumber( )
{
    std::cout << "Enter number:  ";

    int input;

    std::cin >> input;

    return input;
}



void writeAnswer( int x )
{
    std::cout << x << '\n';

}
