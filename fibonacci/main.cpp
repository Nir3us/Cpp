#include <iostream>

int fibonacci(int count)
{
    if (count == 0)
        return 0;
    if (count == 1)
        return 1;
    return fibonacci(count-1) + fibonacci(count-2);
}


int main()
{
    for (int count=0; count < 14; ++count)
        std:: cout << fibonacci(count) << " ";

    return 0;
}
