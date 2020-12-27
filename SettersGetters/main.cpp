#include <iostream>
#include <string>

class MyClass{
private:
    int m_age{};
    int m_hight{};
    std::string m_name{};

public:
    int getAge()
    {
        return m_age;
    }

    void setAge(int x)
    {
        m_age = x;
    }

    int getHight()
    {
        return m_hight;
    }

    void setHight(int x)
    {
        m_hight = x;
    }

    std::string getName()
    {
        return m_name;
    }

    void setName(std::string x)
    {
      m_name = x;
    }
};


int main()
{
    MyClass norbert;
    norbert.setAge(19);
    norbert.setName("Norbert");
    norbert.setHight(179);

    std::cout << norbert.getAge() << " " << norbert.getName() << " " << norbert.getHight() << '\n';
    return 0;
}
