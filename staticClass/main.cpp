#include <iostream>


class IDGenerator
{
private:
    static int s_nextID;

public:
     static int getNextID();
};

 int IDGenerator::s_nextID{ 1 };


int IDGenerator::getNextID() { return s_nextID++; }

int main()
{
    for (int count{ 0 }; count < 12; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';

    return 0;
}
