#include <iostream>
#include <fstream>
#include <cstdlib>
//KURWA NIE DZIA£A
// Zapytaæ kuby co jest Ÿle
using namespace std;
int nr_tel;
string Imie, Nazwisko;

int main()
{
   fstream plik;
    plik.open("wizytowka.txt",ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje!";
        exit(0);
    }

    string linia;
    int nr_linii=1;
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: Imie = linia; break;
            case 2:  Nazwisko = linia; break;
            case 3: nr_tel = atoi(linia.c_str()); break;
        }
        nr_linii++;
    }

    plik.close();

    cout<<Imie<<endl;
    cout<<Nazwisko<<endl;
    cout<<nr_tel<<endl;


    return 0;
}
