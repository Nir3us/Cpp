#include <iostream>
#include <cmath>
using namespace std;
class Ball
{
private:
    string m_color{};
    double m_radius{};
public:
    Ball(string &&color="Black",double radius=10.0)
    {
        m_color = color;
        m_radius = radius;
    };
    Ball(double radius)
    {
        m_radius = radius;
    }
    void print()
    {
        cout << "Color: " << m_color << endl;
        cout << "Radius: " << m_radius << endl;
    }
};

int main()
{
    Ball def{};
    def.print();

    Ball blue{ "blue" };
    blue.print();

    Ball twenty{ 20.0 };
    twenty.print();

    Ball blueTwenty{ "blue", 20.0 };
    blueTwenty.print();
    return 0;
}
