#include <string>
#include <iostream>

class MyString
{
private:
	std::string m_string;

        MyString(char)
        {
        }
public:
	explicit MyString(int x)
	{
		m_string.resize(x);
	}

	MyString(const char *string)
	{
		m_string = string;
	}

	friend std::ostream& operator<<(std::ostream& out, const MyString &s);

};

std::ostream& operator<<(std::ostream& out, const MyString &s)
{
	out << s.m_string;
	return out;
}

int main()
{
	MyString mine('x');
	std::cout << mine;
	return 0;
}
