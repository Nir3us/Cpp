#include <iostream>

 inline int wat{0};

bool passOrFail()
{
    if( wat <= 2)
        {
            ++wat;
            return true;
        }
    else
    {
        return false;
    }
}

int main()
{
    std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
	std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';

    return 0;
}
