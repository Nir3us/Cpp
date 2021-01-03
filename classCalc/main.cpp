#include <iostream>

class Calculator
{
private:
    int m_x{};
    int m_y{};
    char m_decide{};
public:
    Calculator(int x = 0, int y = 1)
                    : m_x{x}, m_y{y}
    {

        setNumbers();

        std::cout << "Enter 'a' if you want to add those numbers, enter 's' if you want to subtract those numbers, "
                            "enter 'd' if you want to divide those numbers and enter 'm' if you wish to multiply them:";
        std::cin >> m_decide;
        if(m_decide == 'a')
        {
            std::cout << "Sum of those numbers is equal to " << m_x + m_y <<'\n';
        }
        else if(m_decide == 's')
        {
              std::cout << "Subtraction of those numbers is equal to " << m_x - m_y <<'\n';
        }
        else if(m_decide == 'd')
        {
            if(m_y == 0 ) std::cout << "You can not divide by 0!!!!\n";
            else std::cout << "The result of the dividing of those numbers is equal to " << m_x / m_y <<'\n';

        }
        else if(m_decide == 'm')
        {
              std::cout << "The result of the multiplication of those numbers is equal to " << m_x * m_y <<'\n';
        }
        else std::cout << "You entered wrong input\n";
    }

    ~Calculator()
    {
        std::cout << "Thanks for using my program ;)\n";
    }

    void setNumbers()
    {

        std::cout << "Enter a integer value: ";
        std::cin >> m_x;
        std::cout << "Enter another value: ";
        std::cin >> m_y;
    }



};

int main()
{
    Calculator test{};
    return 0;
}
