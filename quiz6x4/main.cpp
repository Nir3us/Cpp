#include <iostream>
#include <cstring>

void spellingCStrings(const char *x)
{

    for(int firstFor{0}; firstFor <= 13; firstFor++)
        {
            std::cout << *x << '\n';
            ++x;

        }
}

int main()
{
    const char *world{"Hello world!"};
    spellingCStrings(world);
    return 0;
}
