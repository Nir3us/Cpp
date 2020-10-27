#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

struct FractionTwo
{
    int numerator;
    int denominator;
};

void multyply(Fraction fraction, FractionTwo fractiontwo)
{
    std::cout << "Decimal number that is made from multiplying your fractions is: " << (static_cast<double>(fraction.numerator) * static_cast<double>(fractiontwo.numerator)) / (static_cast<double>(fraction.denominator) * static_cast<double>(fractiontwo.denominator)) << '\n';
}

int main()
{
    Fraction one;
    FractionTwo two;

    std::cout << "Enter numerator of your first fraction:";
    std::cin >> one.numerator;
    std::cout << "Enter denominator of your first fraction:";
    std::cin >> one.denominator;

    std::cout << "Enter numerator of your second fraction:";
    std::cin >> two.numerator;
    std::cout << "Enter denominator of your second fraction:";
    std::cin >> two.denominator;

    multyply(one, two);

    return 0;
}
