#include <iostream>
#include <cstdint>
#include <bitset>


int main()
{

    constexpr std::uint_fast8_t mask0{ 0b0000'0001 };
    constexpr std::uint_fast8_t mask1{ 0b0000'0010 };
    constexpr std::uint_fast8_t mask2{ 0b0000'0100 };
    constexpr std::uint_fast8_t mask3{ 0b0000'1000 };
    constexpr std::uint_fast8_t mask4{ 0b0001'0000 };
    constexpr std::uint_fast8_t mask5{ 0b0010'0000 };
    constexpr std::uint_fast8_t mask6{ 0b0100'0000 };
    constexpr std::uint_fast8_t mask7{ 0b1000'0000 };

    std::uint_fast8_t flags { 0b0000'0101 };
        std::cout << "Bit 0 is " << ( ( flags & mask0 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 1 is " << ( ( flags & mask1) ? " on.\n" : " off.\n" );
        std::cout << "Bit 2 is " << ( ( flags & mask2 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 3 is " << ( ( flags & mask3 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 4 is " << ( ( flags & mask4 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 5 is " << ( ( flags & mask5 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 6 is " << ( ( flags & mask6 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 7 is " << ( ( flags & mask7 ) ? " on.\n" : " off.\n" );


    flags |= mask1;
        std::cout << "Bit 1 is " << ( ( flags & mask1 ) ? " on.\n" : " off.\n" );
    //turning on one bit

    flags |= (mask4 | mask5);
        std::cout << "Bit 4 is " << ( ( flags & mask4 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 5 is " << ( ( flags & mask5 ) ? " on.\n" : " off.\n" );
    //turning on 2 bits ( can be more)

    flags &= ~mask2;
        std::cout << "Bit 2 is " << ( ( flags & mask2 ) ? " on.\n" : " off.\n" );
    // turning off one bit

    flags &= ~(mask4 | mask5);
        std::cout << "Bit 4 is " << ( ( flags & mask4 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 5 is " << ( ( flags & mask5 ) ? " on.\n" : " off.\n" );
    //turning off 2 bits

    flags ^= mask6;
            std::cout << "Bit 6 is " << ( ( flags & mask6 ) ? " on.\n" : " off.\n" );

    flags ^= mask6;
            std::cout << "Bit 6 is " << ( ( flags & mask6 ) ? " on.\n" : " off.\n" );
    //flipping one bit

    flags ^= (mask0 | mask7);
        std::cout << "Bit 0 is " << ( ( flags & mask0 ) ? " on.\n" : " off.\n" );
        std::cout << "Bit 7 is " << ( ( flags & mask7 ) ? " on.\n" : " off.\n" );
    //fliping 2 bits

    /*flags |= mask1;
        std::cout << "Bit 1 is " << ( ( flags & mask1 ) ? " on.\n" : " off.\n" );
        //setting one bit

    flags |= (mask2 | mask3);
    std::cout << "Bit 2 is " << ( ( flags & mask2 ) ? " on.\n" : " off.\n" );
    std::cout << "Bit 3 is " << ( ( flags & mask3 ) ? " on.\n" : " off.\n" );
    //setting 2 bits

    flags &= ~mask1;
    std::cout << "Bit 1 is " << ( ( flags & mask1 ) ? " on.\n" : " off.\n" );
    // reseting one bit

    flags &= ~(mask2 | mask3);
    std::cout << "Bit 2 is " << ( ( flags & mask2 ) ? " on.\n" : " off.\n" );
    std::cout << "Bit 3 is " << ( ( flags & mask3 ) ? " on.\n" : " off.\n" );
    // reseting 2 bits */





    return 0;
}
