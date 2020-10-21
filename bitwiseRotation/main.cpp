#include <bitset>
#include <iostream>

std::bitset<4> rotl(std::bitset<4> bits)           //function that rotates bitset to left by 1
{
    if( bits.test(3) == 0)                                   //if bitset ends with 0 we dont have to do anything
    {
        return bits <<=1;
    }
    else
    {
        bits <<=1;                                            // it makes that we get bit set moved
        bits.flip(0);                                            // as we know we got ###0 so we flip 0 to 1 and get left rotated function
        return bits;
    }

}


int main()
{
    std::bitset<4> bitsOne{ 0b0001 };
    std::cout << rotl(bitsOne) << '\n';

    std::bitset<4> bitsTwo{ 0b1001 };
    std::cout << rotl(bitsTwo) << '\n';


    return 0;
}
