#include <iostream>
int a;
//int b;
using namespace std;

class Pierd {
    public:
        string name;
        int hight;
        int age;
        double GPA;


};



int main()
{

    Pierd pierd1;

    cout << "Hej Piter podaj mi swoje imie: ";
    cin>>a>>endl;
    pierd1.hight = a;
    //cout << "Podaj teraz swój wzrost: ";

    //cin >> b >> endl;
    //pierd1.hight = b

    cout << pierd1.hight << endl;





    return 0;
}
