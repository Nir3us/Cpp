#include<iostream>
#include<math.h>

double pierwiastek(double liczba)
{
    double pierwiastek;
    pierwiastek=pow(liczba, 0.5);
    return(pierwiastek);
}

int main() {
    double liczba;
    std::cout<<"Enter any Num: ";
    std::cin>>liczba;
    std::cout<<"Pierwiastek z "<<liczba<<" to: "<< pierwiastek(liczba);
    return 0;
}

