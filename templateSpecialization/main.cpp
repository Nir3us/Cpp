#include<iostream>

template <class T, int size>
class StaticArray_Base
{
protected:

	T m_array[size]{};

public:
	T* getArray() { return m_array; }

	T& operator[](int index)
	{
		return m_array[index];
	}

	void print()
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << m_array[i];
		std::cout << '\n';
	}

	virtual ~StaticArray_Base() = default;
};

template <class T, int size>
class StaticArray: public StaticArray_Base<T, size>
{
public:
};

template <int size>
class StaticArray<double, size>: public StaticArray_Base<double, size>
{
public:

	void print()
	{
		for (int i{ 0 }; i < size; ++i)
			std::cout << std::scientific << this->m_array[i] << ' ';

		std::cout << '\n';
	}
};

int main()
{

	StaticArray<int, 6> intArray{};


	for (int count{ 0 }; count < 6; ++count)
		intArray[count] = count;

	intArray.print();


	StaticArray<double, 4> doubleArray{};

	for (int count{ 0 }; count < 4; ++count)
		doubleArray[count] = (4.0 + 0.1 * count);

	doubleArray.print();

	return 0;
}
