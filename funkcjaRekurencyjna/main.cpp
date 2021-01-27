#include <iostream>
#include<windows.h>


double liczbaZakazonych(double x)
{
    if (x > 100 ) return 1;
    std::cout << "Procent zakazonej ludnosci wynosi: " << x << "%\n";
    if(x <= 99)
    {
        Sleep(600);
        double y{x * (x/2)};
        liczbaZakazonych(y + (( 1 + y ) / 2 ));
    }
    else if(x > 100) return 0;
return 1;
}


int main()
{
    double x{0};
    liczbaZakazonych(x);
    return 0;
}
