#include <iostream>

enum class color
{
    red,
    blue,
    green,
    purple
};

enum class fruit
{
    banana,
    apple,
    peach,
    grape
};

int main()
{
    color color{ color::green };
    fruit fruit{ fruit::apple };
    if( color == fruit ) //compiler error due to compiler not knowing how to compare these two variables
    {
        std::cout << "Color and fruit are the same!\n";
    }
    else
    {
        std::cout << "Color and fruit are not the same!\n";
    }

    return 0;
}
