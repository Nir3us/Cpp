#include <iostream>

class DateClass
{
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(int month, int day, int year)
    {
        m_month = month;
        m_day = day;
        m_year = year;
    }

    void print()
    {
        std::cout << m_month << '/' << m_day << '/' << m_year;
    }
};

int main()
{
    DateClass date;
    date.setDate(10, 14, 2020);
    date.print();
    std::cout << '\n';

    return 0;
}
