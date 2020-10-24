#include <iostream>
#include <typeinfo>


int main()
{

    short one{3};
    short two{4};
    std::cout << typeid( one + two ).name() << one + two << '\n';

    double three{5.32};
    short four{7};
    std::cout << typeid( three + four ).name() << three + four << '\n';


    return 0;
}
