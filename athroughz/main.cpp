#include <iostream>


int main()
{
    int firstWhile{0};
    int letter{97};

    while(firstWhile <= 25)
    {

        std::cout << static_cast<char>(letter) << " ";

        letter++;
        firstWhile++;
    }
    return 0;
}
