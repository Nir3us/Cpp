#include <iostream>

double myMax(double x, double y)
{
    if(x > y) return x;
    else return y;
}

void mySwap(int &x, int &y)
{
    int c{x};
    x = y;
    y = c;

}

int& getLargestElement(int *array, int length)
{
    for(auto element: array)
    {
        if(array)
    }
}

int main()
{
    double x{1232234.214};
    double y{12415.23};

    std::cout << myMax(x, y) << '\n';


    int xi{100};
    int yi{200};
    mySwap(xi, yi);

    std::cout << xi << " " << yi << '\n';

    int myarray[6]{}



    return 0;
}
