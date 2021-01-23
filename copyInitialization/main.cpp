#include <cassert>
#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
    Fraction(int numerator=0, int denominator=1) :
        m_numerator(numerator), m_denominator(denominator)
    {
        assert(denominator != 0);
    }

	Fraction(const Fraction &copy) :
		m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
	{
		std::cout << "Copy constructor called\n";
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);
        int getNumerator() { return m_numerator; }
        void setNumerator(int numerator) { m_numerator = numerator; }
};

std::ostream& operator<<(std::ostream& out, const Fraction &f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

Fraction makeNegative(Fraction f)
{
    f.setNumerator(-f.getNumerator());
    return f;
}

int main()
{
    Fraction fiveThirds(5, 3);
    std::cout << makeNegative(fiveThirds);

    return 0;
}
