#include <iostream>

namespace something
{

    enum animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake
    };
}


int main()
{
    //double tempEveryDay[ 365 ]{ };

    int numberOfLegs[5]{};
    numberOfLegs[something::animals::chicken] = 2;
    numberOfLegs[something::animals::dog] = 4;
    numberOfLegs[something::animals::cat] = 4;
    numberOfLegs[something::animals::elephant] = 4;
    numberOfLegs[something::animals::duck] = 2;
    numberOfLegs[something::animals::snake] = 0;

    std::cout << numberOfLegs[something::animals::elephant];

    return 0;
}
