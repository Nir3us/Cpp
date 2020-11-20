#include <iostream>
#include <string_view>



int main()
{

    std::string_view names[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::cout << "Enter name: ";
    std::string name{};
    std::cin >> name;
    bool weDidIt{true};
    for(auto firstFor : names)
    {
        if(name == firstFor)
        {
            std::cout << name << " was found.\n";
            weDidIt = false;
        }
    }
    if(weDidIt)
    {
        std::cout << name << " was not found.\n";
    }

    return 0;
}
