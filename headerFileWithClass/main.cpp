#include <iostream>
#include <string>
#include "Name_H.h"

Person::Person(int age, int hight, std::string name) : m_age{ age }, m_hight{ hight }, m_name{ name }
    {
    }
void Person::printPerson()
{
    std::cout << "Your age is equal " << m_age << " and your hight is " << m_hight << " and your name is " << m_name << '\n';
}


int main()
{
    Person norbert{19, 179, "Norbert"};
    norbert.Person::printPerson();


    return 0;
}
