#include <iostream>
#include <array>
#include <cassert>

class Stack
{
private:

    using container_type = std::array<int, 10>;
	using size_type = container_type::size_type;

private:

    container_type m_array;
    size_type m_sizeOfArray{ 0 };

public:

    void reset()
    {
        m_sizeOfArray = 0;
    }

    bool push(int x)
    {
        if(m_sizeOfArray > 10)
        {
            return false;
        }

        m_array[static_cast<size_t>(m_sizeOfArray)] = x;
        ++m_sizeOfArray;
        return true;
    }

    int pop()
    {
        return m_array[--m_sizeOfArray];
    }

    void print()
    {
        std::cout << '(';
        for(size_type length{0}; length < m_sizeOfArray; length++)
        {
            std::cout << m_array[length] << ". ";
        }
        std::cout << ")\n";
    }
};

int main()
{
    Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

    return 0;
}
