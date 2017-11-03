#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
string imie; int liczba;

int main()
{
    cout <<"Podaj imie:"<<endl;
    cin>>imie;
    cout<<"Podaj liczbe ca³kowita:";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)

    {
        Sleep(1000);
        cout<< i <<". "<< imie<< endl;
    }
    return 0;
}
