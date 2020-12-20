#include <iostream>
#include <cmath>
#include <string>

class Ball
{
private:
    std::string m_color{};
    double m_radius{};
public:
    Ball(std::string &&color="Black",double radius=10.0)
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
        std::cout << "Color: " << m_color << '\n';
        std::cout << "Radius: " << m_radius << '\n';
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
