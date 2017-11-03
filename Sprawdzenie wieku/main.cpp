#include <iostream>

using namespace std;
int wiek;

int main()
{
    cout << "Ile masz lat:";
    cin>>wiek;

    if (wiek>=35)
    {
        cout<<"Mozesz zostac prezydentem.";
    }
    else
    {
        cout<<"Nie mozesz zostac prezydentem.";
        if(wiek>=18)
        {
            cout<<"Mozesz glosowac na Prezydenta";

        }
        else
        {
            cout<<"Nie mozesz glosowac na Prezydenta";
        }
    }
    return 0;
}
