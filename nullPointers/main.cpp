#include <iostream>
#include <cstddef>

void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}

void print(int *x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}

int main()
{
    int *x { nullptr };
	print(x);
	print(0);

	int array[5]{ 9, 7, 5, 3, 1 };


    std::cout << "Element 0 has address: " << &array[0] << '\n';


    std::cout << "The array decays to a pointer holding address: " << array << '\n';

    return 0;
}
