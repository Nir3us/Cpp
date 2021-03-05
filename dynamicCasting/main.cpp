#include <iostream>
#include <string>

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		: m_value{value}
	{
	}

	virtual ~Base() = default;
};

class Derived : public Base
{
protected:
	std::string m_name;

public:
	Derived(int value, const std::string& name)
		: Base{value}, m_name{name}
	{
	}

	const std::string& getName() const { return m_name; }
};

int main()
{
	Derived apple{1, "Apple"};
	Base &b{ apple };
	Derived &d{ dynamic_cast<Derived&>(b) };

	std::cout << "The name of the Derived is: " << d.getName() << '\n';

	return 0;
}
