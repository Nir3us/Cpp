#include <iostream>
#include <string>
#include <vector>

struct Employee
{
    std::string name{};
    int age{};
};

int sumTo(int x)
{
    int howMuch{x};
    for(int firstFor{0}; firstFor < howMuch; firstFor++)
        {
            x+=firstFor;
        }
        return x;
}

void printEmployeeName(Employee &employee)
{
    std::cout << employee.name << '\n';
}

//std::pair<int, int> minMax(const int x, const int y)

//int getIndexOfLargestValue(const std::vector<int>& array)

int main()
{
    std::cout << "Enter value: ";
    int valueOne{};
    std::cin >> valueOne;

    std::cout << sumTo(valueOne) << '\n';

    Employee Maik{};
    Maik.name = "Maik";
    Maik.age = 19;
    printEmployeeName(Maik);

    //auto valueTwo{minMax(6, 7)};



    return 0;
}
