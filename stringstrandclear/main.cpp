#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <string_view>

bool isValidName(std::string_view name)
{
    //return std::ranges::all_of(name, [](char ch) {
    //return (std::isalpha(ch) || std::isspace(ch));
    return std::all_of(name.begin(), name.end(), [](char ch) {
    return (std::isalpha(ch) || std::isspace(ch));
    });
}

int main()
{
  std::string name{};

  do
  {
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  } while (!isValidName(name));

  std::cout << "Hello " << name << "!\n";
}
