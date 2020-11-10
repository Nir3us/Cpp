#include <iostream>
#include <algorithm>




int main()
{
    int x{ 233 };
    int y{ 19 };
    std::cout << "Number 1 is equal: " << x << " and number 2 is equal: " << y << '\n';
    std::swap(x, y);
    std::cout << "After swap number 1 is equal: " << x << " and number 2 is equal: " << y << '\n';
    return 0;
}
