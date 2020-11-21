#include <iostream>

enum class Type
{
    INT,
    FLOAT,
    CSTRING
};

void printValue(void *ptr, Type type)
{
    switch (type)
    {
        case Type::INT:
            std::cout << *static_cast<int*>(ptr) << '\n';
            break;
        case Type::FLOAT:
            std::cout << *static_cast<float*>(ptr) << '\n';
            break;
        case Type::CSTRING:
            std::cout << static_cast<char*>(ptr) << '\n';
            break;
    }
}

int main()
{
    int nValue{ 5 };
    float fValue{ 7.5f };
    char szValue[]{ "Mollie" };

    printValue(&nValue, Type::INT);
    printValue(&fValue, Type::FLOAT);
    printValue(szValue, Type::CSTRING);

    return 0;
}
