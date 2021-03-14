#include <iostream>
#include <cstring>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{
	}

	void print()
	{
		std::cout << m_value << '\n';
	}
};


template <class T>
class Storage<T*>
{
private:
	T* m_value;
public:
	Storage(T* value)
	{
		m_value = new T(*value);
	}

	~Storage()
	{
		delete m_value;
	}

	void print()
	{
		std::cout << *m_value << '\n';
	}
};


template <>
Storage<char*>::Storage(char* value)
{

	int length = 0;
	while (value[length] != '\0')
		++length;
	++length;


	m_value = new char[length];


	for (int count = 0; count < length; ++count)
		m_value[count] = value[count];
}


template<>
Storage<char*>::~Storage()
{
	delete[] m_value;
}


template<>
void Storage<char*>::print()
{
	std::cout << m_value;
}

int main()
{
	Storage<int> myint(5);
	myint.print();

	int x = 7;
	Storage<int*> myintptr(&x);

	x = 9;
	myintptr.print();


	char *name = new char[40]{ "Alex" };


	Storage< char*> myname(name);


	delete[] name;


	myname.print();
}
