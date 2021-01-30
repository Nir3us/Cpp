#include <iostream>
#include <cstdint>
#include <cmath>

class FixedPoint2
{
private:
	std::int_least16_t m_base{};
	std::int_least8_t m_decimal{};

public:
	FixedPoint2(std::int_least16_t base = 0, std::int_least8_t decimal = 0)
		: m_base{ base }, m_decimal{ decimal }
	{

		if (m_base < 0 || m_decimal < 0)
		{
			if (m_base > 0)
				m_base = -m_base;
			if (m_decimal > 0)
				m_decimal = -m_decimal;
		}
	}

	FixedPoint2(double d):
		m_base { static_cast<int_least16_t>(d) },


		m_decimal { static_cast<std::int_least8_t>(std::round((d - static_cast<int_least16_t>(d)) * 100)) }
	{
	}


	operator double() const
	{
		return m_base + static_cast<double>(m_decimal) / 100.0;
	}
};

std::ostream& operator<<(std::ostream &out, const FixedPoint2 &fp)
{
	out << static_cast<double>(fp);
	return out;
}

int main()
{
	FixedPoint2 a{ 0.01 };
	std::cout << a << '\n';

	FixedPoint2 b{ -0.01 };
	std::cout << b << '\n';

	FixedPoint2 c{ 5.01 };
	std::cout << c << '\n';

	FixedPoint2 d{ -5.01 };
	std::cout << d << '\n';

	return 0;
}
