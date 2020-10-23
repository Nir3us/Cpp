#include <iostream>


int main()
{
    std::cout << "Enter small integer: ";
    int smaller{ };
    std::cin >> smaller;

    std::cout << "Enter larger integer: ";
    int larger{ };
    std::cin >> larger;

    if(smaller > larger)
    {
        int placeholder { };
        placeholder = larger;
        larger = smaller;
        smaller = placeholder;
    }           //placeholder dies

    std::cout << "The smaller number is: " << smaller << '\n';
    std::cout << "The larger number is: " << larger << '\n';

    return 0;
}               //smaller and larger dies
