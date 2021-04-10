#include <iostream>
#include <memory>

class Something;

int main()
{
	doSomething(std::make_shared<Something>(), std::make_shared<Something>());

	return 0;
}
