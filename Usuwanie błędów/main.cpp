#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
    for(;;)
{

    cout << "Podaj liczbe 1 :";
    cin>>x;
    cout << "Podaj liczbe 2 :";
    cin>>y;




    cout<<"MENU GLOWNE"<< endl;
    cout<<"-----------"<< endl;
    cout<<"1. Dodawanie"<< endl;
    cout<<"2. Odejmowanie"<< endl;
    cout<<"3. Mnozenie"<< endl;
    cout<<"4. Dzielenie"<< endl;
    cout<<"5. Wyjscie"<< endl;

    cout<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
            cout<<"Suma :"<<x+y;
            break;
    case '2':
            cout<<"Suma :"<<x-y;
            break;
    case '3':
            cout<<"Suma :"<<x*y;
            break;
    case '4':
            if(y==0) cout<<"Nie dziel przez 0";
            else cout<<"Suma :"<<x/y;
            break;
    case '5':
            exit(0);
            break;
        default: cout<<"Nie ma takiej opcji w menu";

          }
          getchar();getchar();
          system("cls");
    }

    return 0;
}
