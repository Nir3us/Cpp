#include <iostream>
#include <string>

class Fruit
{
private:
	std::string m_name;
	std::string m_color;

public:
	Fruit(const std::string& name, const std::string& color)
		: m_name{ name }, m_color{ color }
	{

	}

	const std::string& getName() const { return m_name; }
	const std::string& getColor() const { return m_color; }
};

class Apple: public Fruit
{
public:
	Apple(const std::string& color="red")
		: Fruit{ "apple", color }
	{
	}
};

class Banana : public Fruit
{
public:
	Banana()
		: Fruit{ "banana", "yellow" }
	{

	}
};

int main()
{
	Apple a{ "red" };
	Banana b;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";

	return 0;
}
