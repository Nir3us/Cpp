#include <iostream>
#include <array>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents)
        : m_cents{ cents }
    {
    }

    friend bool operator>(const Cents &c1, const Cents &c2)
    {
        return (c1.m_cents > c2.m_cents);
    }

    friend std::ostream& operator<< (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents << " cents ";
        return out;
    }

    Cents& operator+=(const Cents &cents)
    {
        m_cents += cents.m_cents;
        return *this;
    }

    Cents& operator/=(int value)
    {
        m_cents /= value;
        return *this;
    }
};

template <class T>
Cents average(Cents *array, int length)
{
    Cents sum(0);
    for (int count{ 0 }; count < length; ++count)
        sum += array[count];

    sum /= length;
    return sum;
}


int main()
{

    Cents array3[]{ Cents(5), Cents(10), Cents(15), Cents(14) };
    std::cout << average(*array 3, 4) << '\n';

    return 0;
}
