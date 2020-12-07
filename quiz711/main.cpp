#include <iostream>

int factorian(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else if(x < 0)
    {
        return 0;
    }
    else if(x > 1)
    {
        return(factorian(x-1) * x);
    }
    return 0;
}

int main()
{
    std::cout << factorian(10);
    return 0;
}
