#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> bits{ 0b0000'0101 };
    bits.set(3);
    bits.reset(2);
    bits.flip(4);
    // 3 functions from bitset lib

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 has value of: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value of: " << bits.test(4) << '\n';
    // and the 4th function

    std::bitset<4> bitTwo{ 0b1010};
    std::cout << bitTwo << '\n';
    std::cout << (bitTwo << 1) << '\n';
    std::cout << (bitTwo >> 1) << '\n';
    //moving bits by number to <<left and >>right

    std::cout << std::bitset<4>{ ~0b0110u } << " " << std::bitset<8>{ ~0b0110u } <<'\n';
    //  ~(NOT) bit manipulation

    std::cout << ( std::bitset<4>{ 0b1010u} | std::bitset<4>{ ~0b1010u} ) << '\n';
    // | (OR) bit manipulation, gives true if any of 2 is true

    std::cout << ( std::bitset<4>{ 0b1110u } & std::bitset<4>{ 0b1100u} ) << '\n';
    // &(AND) operator gives true if any of 2 is true

    std::cout << ( std::bitset<4>{ 0b0110u } & std::bitset<4>{ 0b1100u } & std::bitset<4>{ 0b0101u }) << '\n';
    //same here but we got 3 operators

    std::cout << ( std::bitset<4>{ 0b0010u } ^ std::bitset<4>{ 0b1001u} ) << '\n';
    //^(XOR) is true when one operand is true and other false

    std::cout << ( std::bitset<4>{ 0b1110u } ^ std::bitset<4>{ 0b1010u } ^ std::bitset<4>{ 0b0111u }) << '\n';
    // when there is even number of 1s then XOR gives 0 and if there is odd it gives 1

    std::bitset<4> bitThree{ 0b0110};
    std::cout << bitThree << '\n';
    bitThree <<= 1;
    std::cout << bitThree << '\n';
    //assignment operators look similar to arithmetic's ones

    return 0;
}
