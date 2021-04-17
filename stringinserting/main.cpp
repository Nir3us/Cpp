#include <iostream>

using namespace std;

int main()
{
   string sString("aaaa");
    cout << sString << endl;

    sString.insert(2, string("bbbb"));
    cout << sString << endl;

    sString.insert(4, "cccc");
    cout << sString << endl;
}
