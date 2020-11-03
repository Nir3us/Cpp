#include <iostream>

void sumTo(int firstValue)
{
    int sum{};

    for(int i{0}; i <= firstValue; i++)
        {
            sum += i;
        }

        std::cout << sum;
}

int main()
{
    for(char forFirst{ 'a' }; forFirst <= 'z'; forFirst++)
     {


    std::cout << forFirst << " ";
     }

     std::cout << '\n';
     std::cout << "Enter integer: ";
     int something{};
     std::cin >> something;

     sumTo(something);

    return 0;
}
