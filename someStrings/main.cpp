#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{ };
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    int age{ };
    std::cin >> age;

    int nameLength{ static_cast<int>(name.length())};


    std::cout << "You have lived " << static_cast<double>(age) / nameLength << " for each letter in your name!\n";
    return 0;
}
