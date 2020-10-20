#include <iostream>

bool primeNumber(int x)
{
    if(x==2)
    {
        return true;
    }
    else if(x==3)
    {
        return true;
    }
    else if(x==5)
    {
        return true;
    }
    else if(x==7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int giveNumber()
{
    std::cout << "Enter intiger: ";
    int x { };
    std::cin >> x;

    return x;
}

int main()
{
    int x(giveNumber());

    if(primeNumber(x))
    {
        std::cout << "The digit  " << x << " is  prime.\n";
    }
    else
    {
        std::cout << "The digit  " << x << " is not prime.\n";
    }



    return 0;
}
