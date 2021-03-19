#include <iostream>
#include <string>

int main()
{
    try
    {
        throw 3;
    }
    catch (int x)
    {
        std::cerr << "We caught an int exception with value: " << x << '\n';
    }
    catch (double)
    {
        std::cerr << "We caught an exception of type double" << '\n';
    }
    catch (const std::string &str)
    {
        std::cerr << "We caught an exception of type std::string" << '\n';
    }

    std::cout << "Continuing on our merry way\n";

    return 0;
}
