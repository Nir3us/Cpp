#include <string>
#include <iostream>

class Animal
{
protected:
    std::string m_name;

public:
    Animal(const std::string& name)
        : m_name(name)
    {
    }

    const std::string& getName() const { return m_name; }
    virtual const char* speak() const = 0;

    virtual ~Animal() = default;
};

const char* Animal::speak() const
{
    return "buzz";
}

class Dragonfly: public Animal
{

public:
    Dragonfly(const std::string& name)
        : Animal{name}
    {
    }

    const char* speak() const override
    {
        return Animal::speak();
    }
};

int main()
{
    Dragonfly dfly{"Sally"};
    std::cout << dfly.getName() << " says " << dfly.speak() << '\n';

    return 0;
}
