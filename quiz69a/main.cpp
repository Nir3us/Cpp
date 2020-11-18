#include <iostream>
#include <cstddef>
#include <algorithm>
#include <iterator>



int main()
{
    std::cout << "How many names would you like to enter? ";
    std::size_t howMany{};
    std::cin >> howMany;

    std::string *listOfNames{ new std::string[howMany]{}};

    //std::cout << howMany << " wololo \n" << listOfNames;
    for(int firstFor{0}; firstFor < static_cast<int>(howMany); firstFor++)
        {
            std::cout << "Enter name #"<< firstFor + 1 << ": ";
            std::cin >> listOfNames[firstFor];
        }


        std::sort(listOfNames, listOfNames + howMany);

        for(int secondFor{0}; secondFor < static_cast<int>(howMany); secondFor++)
            {
                std::cout << "Name number #" << secondFor + 1 << " " << listOfNames[secondFor] << '\n';
            }


    return 0;
}
