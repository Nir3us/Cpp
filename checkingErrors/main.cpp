#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::string text{ "Hello world!" };
    constexpr int minIndex{ 0 };
    const int maxIndex{ static_cast<int>( text.length() ) };

    while(true)
    {
        std::cout << "Enter an index: ";
        int index{};
        std::cin >> index;

        if(std::cin.fail())
        {
            std::cin.clear();


            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\n[ERROR]: Extraction failed! "
                         "You enter not an integer! Please, enter an integer!"
                         "\n\n";
        }


        else if(index < minIndex || index > maxIndex)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\n[ERROR]: The index is outside the bound! "
                         "Please enter an index that in the bound!\n\n";
        }

        else
        {
            std::cout << "Letter #" << index << " is "
                      << text[static_cast<unsigned int>(index)] << '\n';
            break;
        }

    }

    return 0;
}
