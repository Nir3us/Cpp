#include <string>
#include <iostream>

class Employee
{
private:
    int m_id;
    std::string m_name;

public:
    Employee(int id = 0, const std::string & name = "") :
        m_id(id), m_name(name)
    {
        std::cout << "Employee " << m_name << " created.\n";
    }

    Employee(const std::string& name) : Employee{ 0, name } { }

};

int main()
{
    Employee emp1("George");
    Employee emp2{ "Jack" };
}
