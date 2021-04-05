#include <iostream>
#include <memory>

class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
};

int main()
{

	auto ptr1 = std::make_shared<Resource>();
	{
		auto ptr2 = ptr1;

		std::cout << "Killing one shared pointer\n";
	}

	std::cout << "Killing another shared pointer\n";

	return 0;
}
