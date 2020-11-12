#include <iostream>
#include <string_view>

int main()
{
  std::string_view stringOne{ "Something is happening!!" };

  std::cout << stringOne.length() << '\n';
  std::cout << stringOne.substr(0, stringOne.find(' ')) << '\n';
  std::cout << (stringOne == "Something is happening!!") << '\n';

  std::cout << stringOne << '\n';


char bigBooty[]{ "Big pile of gold!" };
  std::string_view stringTwo{ bigBooty };

  std::cout << stringTwo << '\n';


  bigBooty[7] = 's';


  return 0;
}
