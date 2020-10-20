#include <iostream>

using namespace std;
doNothing(int&)
{
}

int main()
{
    int x;
    doNothing(x);
    cout << x << endl;


    return 0;
}
