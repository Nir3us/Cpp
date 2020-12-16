#include <iostream>
#include <string>


int main()
{
    std::cout << "Podaj imie: ";
    std::string imieJeden{};
    std::cin >> imieJeden;

    std::cout << "Podaj drugie imie: ";
    std::string imieDwa{};
    std::cin >> imieDwa;

    if(imieJeden.length() > imieDwa.length())
    {
        std::cout << "Imie " << imieJeden << " jest dluzsze\n";
    }
    else std::cout << "Imie " << imieDwa << " jest dluzsze\n";

        return 0;
}
