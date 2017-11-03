#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj Login: ";
    cin>>login;

    cout<<"Podaj haslo: ";
    cin>>haslo;


    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout<<"Witaj ponownie Admin!";

    }
    else
    {
        cout<<"Nie udalo sie zalogowac!";
    }
    return 0;
}
