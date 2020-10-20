#include <iostream>

using namespace std;

void iReallyDoSomething()
{

    cout << "I m useful I promise.\n";

}

void doSomething()
{

    cout << "This is inside doSomething function.\n";
    iReallyDoSomething();
    cout << "This is inside doSomething function.\n";

}


int main()
{
    cout << "Program starts.\n";
    doSomething();
    doSomething();
    cout << "Returning to main.\n";
    return 0;
}
