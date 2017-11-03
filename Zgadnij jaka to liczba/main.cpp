#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;

int liczba, strzal, ile_prob=0;


int main()
{
    cout << "Witaj! pomyslalem sobie liczbe z zakresu 1-100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;


    while(strzal!=liczba)
    {
        ile_prob++;
        cout<<"Zgadnij jaka liczba(to Twoja "<<ile_prob<<" proba:";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"udalo Ci sie wygrywasz, wygrywasz w "<<ile_prob<<" probie"<<endl;
        else if(strzal<liczba)
            cout<<"za mala liczba"<<endl;
        else if(strzal>liczba)
            cout<<"za duza liczba"<<endl;
    }

    system("pause");

    return 0;
}
