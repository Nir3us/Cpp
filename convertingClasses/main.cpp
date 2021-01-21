#include <iostream>

class Grosz
{
private:
    int m_grosz;
public:
    Grosz(int grosz=0)
        : m_grosz{ grosz }
    {
    }

    operator int() const { return m_grosz; }

    int getGrosz() const { return m_grosz; }
    void setCents(int grosz) { m_grosz = grosz; }
};

class Zloty
{
private:
    int m_zloty;
public:
    Zloty(int zloty=0)
        : m_zloty{ zloty }
    {
    }

    operator Grosz() const { return Grosz(m_zloty * 100); }
};

void printGrosz(Grosz grosz)
{
    std::cout << grosz;
}

int main()
{
    Zloty zloty{ 1233 };
    printGrosz(zloty);

    std::cout << '\n';

    return 0;
}
