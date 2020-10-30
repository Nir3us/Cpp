#include <iostream>
#include <cstdlib>
#include <string>


enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich
};

std::string getAnimalName(Animal animal)
{
    switch (animal)
    {
        case Animal::pig:
        {
            return "Pig";
            break;
        }
        case Animal::chicken:
        {
            return "Chicken";
            break;
        }
        case Animal::goat:
        {
            return "Goat";
            break;
        }
         case Animal::cat:
        {
            return "Cat";
            break;
        }
        case Animal::dog:
        {
            return "Dog";
            break;
        }
        case Animal::ostrich:
        {
            return "Ostrich";
            break;
        }
        default:
        {
            return "ERROR";
            break;
        }
    }
}

void printNumberOfLegs(Animal animal)
{

    std::string x{getAnimalName(animal)};
    std::cout << "A " << x << " has ";

   switch (animal)
    {
        case Animal::pig:
        case Animal::ostrich:
        {
            std::cout << "2 legs!\n";
            break;
        }
        case Animal::chicken:
        case Animal::goat:
        case Animal::cat:
        case Animal::dog:
     {
            std::cout << "4 legs\n";
            break;
     }
        default:
        {
            std::cout << "ERROR";
            break;
        }
    }
}


int main()
{
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);

    return 0;
}
