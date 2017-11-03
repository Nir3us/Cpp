#include <iostream>
#include <fstream>

using namespace std;
int nr_tel;
string Imie, Nazwisko;

int main()
{
    cout << "Podaj imie: "; cin>>Imie;
    cout<<"Podaj nazwisko: "; cin>>Nazwisko;
    cout<<"Podaj numer telefonu: "; cin>>nr_tel;

    fstream plik;
    plik.open("wizytowka.txt",ios::out | ios::app);

    plik<<Imie<<endl;
    plik<<Nazwisko<<endl;
    plik<<nr_tel<<endl;
    plik.close();

    return 0;
}
