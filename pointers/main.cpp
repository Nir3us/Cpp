#include <iostream>



int main()
{
    int valueFirst{ 5 };
    std::cout << valueFirst << '\n';
    std::cout << &valueFirst << '\n';
    std::cout << *(&valueFirst ) << '\n';

    int valueSecond{ 45 };
    int *firstPointer{ &valueSecond };
    std::cout << firstPointer << '\n';
    std::cout << *firstPointer << '\n';




    return 0;
}
