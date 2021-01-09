#include <iostream>
#include <cmath>


 class Point2d
 {
 private:
    double m_x{0.0};
    double m_y{0.0};

 public:
     Point2d() : m_x{0.0}, m_y{0.0}
     {
     }

    Point2d(double x, double y) : m_x{ x }, m_y{ y }
    {
    }

    void print()
    {
        std::cout << "Point2d (" << m_x << ',' << m_y << ')' << '\n';
    }

    friend double distanceFrom(Point2d &x, Point2d &y);

 };

    double distanceFrom(Point2d &x, Point2d &y)
    {
        return std::sqrt((x.m_x - y.m_x)*(x.m_x - y.m_x) + (x.m_y - y.m_y)*(x.m_y - y.m_y));
    }


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };
    first.print();
    second.print();
    std::cout << "Distance between two points: " <<distanceFrom(first, second) << '\n';


    return 0;
}
