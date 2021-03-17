#include <iostream>

template <class T, class S>
class Pair
{
private:
	T m_x;
	S m_y;

public:
	Pair(const T& x, const S& y)
		: m_x(x), m_y(y)
	{
	}

	const T& first() const { return m_x; }
	const S& second() const { return m_y; }
};

int main()
{
	Pair<int, double> p1(7, 4.6);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p2(13.4, 7);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;
}
