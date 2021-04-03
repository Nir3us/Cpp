#include <memory>
#include <iostream>

class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }

	friend std::ostream& operator<<(std::ostream& out, const Resource &res)
	{
		out << "I am a resource\n";
		return out;
	}
};

void useResource(Resource *res)
{
	if (res)
		std::cout << *res << '\n';
}

int main()
{
	auto ptr{ std::make_unique<Resource>() };

	useResource(ptr.get());

	std::cout << "Ending program\n";

	return 0;
}
