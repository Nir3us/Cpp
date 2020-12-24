#include <iostream>

class Date
{
private:
    int m_month;
    int m_day;
    int m_year;

public:
    const int& getMonth() { return m_month; }
    void setMonth(int month) { m_month = month; }

    const int& getDay() { return m_day; }
    void setDay(int day) { m_day = day; }

    const int& getYear() { return m_year; }
    void setYear(int year) { m_year = year; }
int main()
{

    Date today;
    today.setMonth(12);
    today.setDay(24);
    today.setYear(2020);
    std::cout << today.getMonth()
        << '/' << today.getDay()
        << '/' << today.getYear() << '\n';

}
