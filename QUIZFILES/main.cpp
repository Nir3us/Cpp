#include <iostream>

using namespace std;

int getInput();

int main()
{
    int inputOne{ getInput() };
    int inputTwo{ getInput() };

    cout << inputOne << " + " << inputTwo << " is " << inputOne+inputTwo << '\n';

    return 0;
}
