#include <array>
#include <numeric>
#include <iostream>
#include <algorithm>

enum ItemTypes
{
  healthPotion,
  torch,
  arrow,
  maxItems
};

using inv = std::array<int, ItemTypes::maxItems>;

int countTotalItems(const inv& items)
{
  return std::accumulate(items.begin(), items.end(), 0);
}

int main()
{
  inv items{ 2, 5, 10 };

  std::cout << "The player has " << countTotalItems(items) << " item(s) in total.\n";

  std::cout << "The player has " << items[ItemTypes::torch] << " torch(es)\n";

  return 0;
}
