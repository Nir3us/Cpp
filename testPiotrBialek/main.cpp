#include <iostream>

    int main()
{
    int data[6]{ };
    std::cout << "Podaj pierwsza liczbe swojego dnia urodzenia: ";
    std::cin >> data[0];
    std::cout << "Podaj druga liczbe swojego dnia urodzenia: ";
    std::cin >> data[1];
    std::cout << "Podaj pierwsza liczbe swojego miesiaca urodzenia: ";
    std::cin >> data[2];
    std::cout << "Podaj druga liczbe swojego miesiaca  urodzenia: ";
    std::cin >> data[3];
    std::cout << "Podaj trzecia liczbe swojego roku urodzenia: ";
    std::cin >> data[4];
    std::cout << "Podaj czwarta liczbe swojego roku urodzenia: ";
    std::cin >> data[5];

    for (int i{ 0 }; i < 6; ++i)
    {
        for (int aktualnaLiczba{ 0 }; aktualnaLiczba < 5; ++aktualnaLiczba)
        {
            if (data[aktualnaLiczba] > data[aktualnaLiczba+1])
                std::swap(data[aktualnaLiczba], data[aktualnaLiczba + 1]);
        }
    }

    for (int i{ 0 }; i < 6; ++i)
        std::cout << data[i] << ' ';

    std::cout << '\n';


    return 0;
}
