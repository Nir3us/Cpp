#ifndef NAME_H_H_INCLUDED
#define NAME_H_H_INCLUDED

class Person
{
private:
    int m_age{};
    int m_hight{};
    std::string m_name{};
public:
    Person(int age, int hight, std::string name);

    void printPerson();

};

#endif // NAME_H_H_INCLUDED
