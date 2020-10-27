#include <iostream>
#include <string>


enum class MonsterRace
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
};

struct Monster
{
    std::string name{ };
    MonsterRace type{ };
    int healthPoints{ };
};

std::string getMonsterType(MonsterRace x)
{
    if(x == MonsterRace::ogre )
    {
        return "Ogre";
    }
    else if(x == MonsterRace::dragon)
    {
        return "Dragon";
    }
      else if(x == MonsterRace::orc)
    {
        return "Orc";
    }
      else if(x == MonsterRace::giant_spider)
    {
        return "Giant Spider";
    }
      else if(x == MonsterRace::slime)
    {
        return "Slime";
    }
      else
      {
          std::cout << "Wrong input try again!\n";
          return "ERROR your input is invalid!!!";
      }

}

Monster enterMonsterData( )
{
    Monster m;

    std::cout << "Enter your monster name: ";
    std::cin >> m.name;

    std::cout << "Enter your monster type(0==Ogre, 1==Dragon, 2==Orc, 3==Giant Spider, 4==Slime): ";
    int x{ };
    std::cin >> x;
    m.type = static_cast<MonsterRace>(x);

    std::cout << "Enter how many does your monster have health points: ";
    std::cin >> m.healthPoints;

    return m;
}

void printMonster(Monster monster)
{
    std::cout << "This " <<getMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.healthPoints << " health.\n";
}

int main()
{
    Monster firstMonster{enterMonsterData()};
    Monster secondMonster{enterMonsterData()};

    printMonster(firstMonster);
    printMonster(secondMonster);

    return 0;
}
