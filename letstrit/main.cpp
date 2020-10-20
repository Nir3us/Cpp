#include <cstddef>
#include <iostream>
#include <float.h>
#include <iomanip>


int main()
{

    double x1{ 0.1 };

    std::cout << std::setprecision(17);

    std::cout << x1 << '\n';

    double x2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    std::cout << x2 << '\n';

    return 0;

}
