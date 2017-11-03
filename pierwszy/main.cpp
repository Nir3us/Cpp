#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Ilu uczniow jest w twojej klasie:";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama:";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);

    cout<<"Cukierkow dla ka¿dego ucznia;"<<x;

    y = cukierki-x*(uczniowie-1);

    cout<<"Dla Jasia na wieczór: "<<y;

    return 0;
}
