#include <iostream>
#include <cstdint>

class Average
{
private:
	std::int_least32_t m_total{ 0 };
	std::int_least8_t m_numbers{ 0 };

public:
	Average()
	{
	}

	friend std::ostream& operator<<(std::ostream &out, const Average &average)
	{
		out << static_cast<double>(average.m_total) / average.m_numbers;

		return out;
	}

	Average& operator+=(int num)
	{
		m_total += num;
		++m_numbers;

		return *this;
	}
};

int main()
{
	Average avg{};

	avg += 4;
	std::cout << avg << '\n';

	avg += 8;
	std::cout << avg << '\n';

	avg += 24;
	std::cout << avg << '\n';

	avg += -10;
	std::cout << avg << '\n';

	(avg += 6) += 10;
	std::cout << avg << '\n';

	Average copy{ avg };
	std::cout << copy << '\n';

	return 0;
}
