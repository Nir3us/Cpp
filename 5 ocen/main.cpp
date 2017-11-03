#include <iostream>

using namespace std;
float oceny[5];
float srednia, suma=0;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Podaj "<<i+1<<" ocene: ";
        cin>>oceny[i];
        suma += oceny[i];

    }
    srednia = suma / 5;
    cout<<endl<<"Srednia = "<<srednia;


    return 0;
}
