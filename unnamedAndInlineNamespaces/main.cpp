#include <iostream>

inline namespace v1
{

    void somethingOne()
    {
        std::cout << "Something one!\n";
    }
}

namespace v2
{
     void somethingOne()
    {
        std::cout << "Something one but with suprice!\n";
    }
}

int main()
{
    v1::somethingOne();

    v2::somethingOne();

    somethingOne();

    return 0;
}
