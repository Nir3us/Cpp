#include <iostream>
#include <iterator>


int main()
{

    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int lengthOfArray { std::size(array)};

    for(int firstFor{0}; firstFor < lengthOfArray; firstFor++)
        {
            std::cout << array[firstFor] << ' ';
        }
        std::cout << '\n';
        int input{ };
        while(true)
        {
            std::cout << "Enter value between 1 and 9: ";
            std::cin >> input;
            if(std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
            }
            else
            {
                for(int secondFor{0}; secondFor < lengthOfArray; secondFor++)
                    {
                        if(input == array[secondFor])
                        {
                            std::cout << "Index value of your guess is: " << secondFor << '\n';
                            std::cout << "Would you like to exit program?";
                            char exitOne{ };
                            std::cin >> exitOne;
                            if(exitOne == 'n' || exitOne == 'N')
                            {
                                break;
                            }
                            else if(exitOne == 'y' || exitOne == 'Y')
                            {
                                exit(0);
                            }
                            else
                            {
                                std::cout << "Your input was wrong exiting program.\n";
                                exit(1);
                            }
                        }
                    }
            }
        }

    return 0;
}
