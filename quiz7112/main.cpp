#include <iostream>

int sumOfElements(int x)
{
    if (x < 10)
		return x;
	else
		return sumOfElements(x / 10) + x % 10;
}

int main()
{
    std::cout << sumOfElements(93427);
    return 0;
}
