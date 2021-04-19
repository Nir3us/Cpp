#include <iostream>

using namespace std;

int main()
{
    std::cout << 5 << '\n';

    std::cout.setf(std::ios::showpos);
    std::cout << 5 << '\n';

    std::cout << std::noshowpos << 5 << '\n';

    std::cout << std::showpos << 5 << '\n';
}
