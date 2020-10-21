#include <iostream>

int ifIsBiggerOrEqual(int x, int y)
{
    std::cout << "1";
    return ( x - y );

}

int numMinusPowOfTwo(int x, int y)
{
    if( x >= y )
    {
        return ifIsBiggerOrEqual(x, y);
    }
    else
    {
        std::cout << "0";
        return x;
    }
}

int main()
{
    std::cout << "Enter number not bigger then 255 and not smaller then 0 integer: ";
    int dec{ };
    std::cin >>dec;

    dec = numMinusPowOfTwo(dec, 128);
    dec = numMinusPowOfTwo(dec, 64);
    dec = numMinusPowOfTwo(dec, 32);
    dec = numMinusPowOfTwo(dec, 16);
    dec = numMinusPowOfTwo(dec, 8);
    dec = numMinusPowOfTwo(dec, 4);
    dec = numMinusPowOfTwo(dec, 2);
    dec = numMinusPowOfTwo(dec, 1);

    return 0;
}
