#include <iostream>

class Base
{
private:
	int m_value{};

public:
	Base(int value)
		: m_value{ value }
	{
	}

	friend std::ostream& operator<< (std::ostream &out, const Base &b)
	{
		out << "In Base\n";
		out << b.m_value << '\n';
		return out;
	}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base{ value }
	{
	}

	friend std::ostream& operator<< (std::ostream &out, const Derived &d)
	{
		out << "In Derived\n";
		out << static_cast<const Base&>(d);
		return out;
	}
};

int main()
{
	Derived derived{ 7 };

	std::cout << derived << '\n';

	return 0;
}
