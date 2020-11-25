#include <iostream>
#include <array>

void swapping(int& a, int& b)
{
    int c{};
    c = a;
    a = b;
    b = c;
}

int main()
{
    std::cout << "Enter integer: ";
    int valueOne{0};
    std::cin >> valueOne;

    std::cout << "Enter other integer: ";
    int valueTwo{0};
    std::cin >> valueTwo;

    swapping(valueOne, valueTwo);
    std::cout << valueOne << '\t' << valueTwo << '\n';

    return 0;
}
