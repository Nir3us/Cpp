#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    std::srand(std::time(nullptr));

    string sString{};
    sString.reserve(64);

    for (int nCount{ 0 }; nCount < 64; ++nCount)
        sString += 'a' + std::rand() % 26;

    cout << sString;
}
