#include <iostream>

struct employee
{
    short id;
    int age;
    double wage;
};

void printInformation(employee employee)
{
    std::cout << "ID:   " << employee.id << '\n';
    std::cout << "Age:  " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}

int main()
{
    employee Joe;
    Joe.id = 13;
    Joe.age = 19;
    Joe.wage = 2000.0;

    employee Frank;
    Frank.id = 14;
    Frank.age = 22;
    Frank.wage = 2600.25;

    double totalWage{ Joe.wage + Frank.wage };
    std::cout << "We have to pay our employees " << totalWage << '\n';
    if( Joe.age > Frank.age )
    {
        std::cout << "Joe is older then Frank!\n";
    }
    else if ( Joe.age == Frank.age )
    {
        std::cout << "Joe is same age as Frank!\n";
    }
    else
    {
        std::cout << "Frank is older then Joe!\n";
    }


    Joe.id = 12;
    Frank.id = 13;

    employee Nir3us{16, 19, 1808.23};

        printInformation( Joe );
        printInformation( Frank );
        printInformation( Nir3us );

    return 0;
}
