#include <iostream>
#include <cassert>

class Me
{
private:
    int m_age{};
    int m_hight{};
    std::string m_name{};

public:
    Me()
    {
         m_age = 19;
         m_hight = 179;
         m_name = "Norbert";
    }

    Me(int age, std::string name, int hight=1)
    {
        assert(hight > 0);
        m_age = age;
        m_hight = hight;
        m_name = name;
    }

    int getAge() { return m_age; }
    int getHight() { return m_hight; }
    std::string getName() { return m_name; }
};

int main()
{
    Me norbert;
    std::cout << norbert.getAge() << '/' << norbert.getHight() << '/' << norbert.getName() << '\n';

    return 0;
}
