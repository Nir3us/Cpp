#include <cassert>
#include <initializer_list>
#include <iostream>

class IntArray
{
private:
	int m_length{};
	int *m_data{};

public:
	IntArray() = default;

	IntArray(int length) :
		m_length{ length },
		m_data{ new int[length]{} }
	{

	}

	IntArray(std::initializer_list<int> list) :
		IntArray(static_cast<int>(list.size()))
	{
		int count{ 0 };
		for (auto element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	~IntArray()
	{
		delete[] m_data;
	}

	IntArray(const IntArray&) = delete;
	IntArray& operator=(const IntArray& list) = delete;

	int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);
		return m_data[index];
	}

	int getLength() const { return m_length; }
};

int main()
{
	IntArray array{ 5, 4, 3, 2, 1 };
	for (int count{ 0 }; count < array.getLength(); ++count)
		std::cout << array[count] << ' ';

	return 0;
}
