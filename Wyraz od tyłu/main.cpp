#include <iostream>

using namespace std;

int main()
{
    string wyraz;
    cout<<"Podaj wyraz:";
    cin>>wyraz;

    int dlugosc=wyraz.length();
    for(int i=dlugosc-1; i>=0; i--)
        cout<<wyraz[i];


    return 0;
}
