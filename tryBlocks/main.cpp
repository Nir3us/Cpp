#include <iostream>

class A
{
private:
	int m_x;
public:
	A(int x) : m_x{x}
	{
	}
};

class B : public A
{
public:
	B(int x) try : A{x}
	{
		if (x <= 0)
			throw 1;
	}
	catch (...)
	{
                std::cerr << "Exception caught\n";


	}
};

int main()
{
	try
	{
		B b{0};
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}
