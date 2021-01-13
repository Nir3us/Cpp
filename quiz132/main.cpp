#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator=0, int denominator=1):
		m_numerator{numerator}, m_denominator{denominator}
	{
		reduce();
	}

	static int gcd(int a, int b)
	{
		return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
	}

	void reduce()
	{
		if (m_numerator != 0 && m_denominator != 0)
		{
			int gcd{ Fraction::gcd(m_numerator, m_denominator) };
			m_numerator /= gcd;
			m_denominator /= gcd;
		}
	}

	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, int value);
	friend Fraction operator*(int value, const Fraction &f1);

	void print() const
	{
		std::cout << m_numerator << '/' << m_denominator << '\n';
	}
};

Fraction operator*(const Fraction &f1, const Fraction &f2)
{
	return { f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator };
}

Fraction operator*(const Fraction &f1, int value)
{
	return { f1.m_numerator * value, f1.m_denominator };
}

Fraction operator*(int value, const Fraction &f1)
{
	return { f1.m_numerator * value, f1.m_denominator };
}

int main()
{
	Fraction f1{2, 5};
	f1.print();

	Fraction f2{3, 8};
	f2.print();

	Fraction f3{ f1 * f2 };
	f3.print();

	Fraction f4{ f1 * 2 };
	f4.print();

	Fraction f5{ 2 * f2 };
	f5.print();

	Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
	f6.print();

	Fraction f7{0, 6};
	f7.print();

	return 0;
}
