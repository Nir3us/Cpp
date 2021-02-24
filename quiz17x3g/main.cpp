#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>

int getRandomNumber(int min, int max)
{
  static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) };
  return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}


enum class PotionType
{
  health,
  strength,
  poison,


  max_type
};

enum class PotionSize
{
  small,
  medium,
  large,

  max_size
};


std::string_view getPotionTypeName(PotionType type)
{
  static constexpr std::array names{
    "Health",
    "Strength",
    "Poison"
  };

  return names.at(static_cast<std::size_t>(type));
}

std::string_view getPotionSizeName(PotionSize size)
{
  static constexpr std::array names{
    "Small",
    "Medium",
    "Large"
  };

  return names.at(static_cast<std::size_t>(size));
}

class Potion
{
private:
  PotionType m_type{};
  PotionSize m_size{};

public:
  Potion(PotionType type, PotionSize size)
      : m_type{ type },
        m_size{ size }
  {
  }

  PotionType getType() const { return m_type; }
  PotionSize getSize() const { return m_size; }

  std::string getName() const
  {

    std::stringstream result{};

    result << getPotionSizeName(getSize()) << " potion of " << getPotionTypeName(getType());

    return result.str();
  }

  static Potion getRandomPotion()
  {
    return {
      static_cast<PotionType>(getRandomNumber(0, static_cast<int>(PotionType::max_type) - 1)),
      static_cast<PotionSize>(getRandomNumber(0, static_cast<int>(PotionSize::max_size) - 1))
    };
  }
};

class Creature
{
protected:
  std::string m_name;
  char m_symbol;
  int m_health;
  int m_damage;
  int m_gold;

public:
  Creature(std::string_view name, char symbol, int health, int damage, int gold)
      : m_name{ name },
        m_symbol{ symbol },
        m_health{ health },
        m_damage{ damage },
        m_gold{ gold }
  {
  }

  char getSymbol() const { return m_symbol; }
  const std::string& getName() const { return m_name; }
  bool isDead() const { return m_health <= 0; }
  int getGold() const { return m_gold; }
  void addGold(int gold) { m_gold += gold; }
  void reduceHealth(int health) { m_health -= health; }
  int getHealth() const { return m_health; }
  int getDamage() const { return m_damage; }
};

class Player : public Creature
{
  int m_level{ 1 };

public:
  Player(std::string_view name)
      : Creature{ name, '@', 10, 1, 0 }
  {
  }

  void levelUp()
  {
    ++m_level;
    ++m_damage;
  }

  int getLevel() const { return m_level; }
  bool hasWon() const { return m_level >= 20; }

  void drinkPotion(const Potion& potion)
  {
    switch (potion.getType())
    {
    case PotionType::health:
      m_health += ((potion.getSize() == PotionSize::large) ? 5 : 2);
      break;
    case PotionType::strength:
      ++m_damage;
      break;
    case PotionType::poison:
      reduceHealth(1);
      break;

    case PotionType::max_type:
      break;
    }
  }
};

class Monster : public Creature
{
public:
  enum class Type
  {
    dragon,
    orc,
    slime,
    max_types
  };

private:
  static const Creature& getDefaultCreature(Type type)
  {
    static std::array<Creature, static_cast<std::size_t>(Type::max_types)> monsterData{
      { { "dragon", 'D', 20, 4, 100 },
        { "orc", 'o', 4, 2, 25 },
        { "slime", 's', 1, 1, 10 } }
    };

    return monsterData.at(static_cast<std::size_t>(type));
  }

public:
  Monster(Type type)
      : Creature{ getDefaultCreature(type) }
  {
  }

  static Monster getRandomMonster()
  {
    int num{ getRandomNumber(0, static_cast<int>(Type::max_types) - 1) };
    return Monster{ static_cast<Type>(num) };
  }
};

void onMonsterKilled(Player& player, const Monster& monster)
{
  std::cout << "You killed the " << monster.getName() << ".\n";
  player.levelUp();
  std::cout << "You are now level " << player.getLevel() << ".\n";
  std::cout << "You found " << monster.getGold() << " gold.\n";
  player.addGold(monster.getGold());

  constexpr int potionChance{ 30 };
  if (getRandomNumber(1, 100) <= potionChance)
  {
    auto potion{ Potion::getRandomPotion() };

    std::cout << "You found a mythical potion! Do you want to drink it? [y/n]: ";
    char choice{};
    std::cin >> choice;

    if (choice == 'y')
    {
      player.drinkPotion(potion);
      std::cout << "You drank a " << potion.getName() << '\n';
    }
  }
}

void attackMonster(Player& player, Monster& monster)
{
  if (player.isDead())
    return;

  std::cout << "You hit the " << monster.getName() << " for " << player.getDamage() << " damage.\n";

  monster.reduceHealth(player.getDamage());

  if (monster.isDead())
  {
    onMonsterKilled(player, monster);
  }
}

void attackPlayer(const Monster& monster, Player& player)
{
  if (monster.isDead())
    return;

  player.reduceHealth(monster.getDamage());
  std::cout << "The " << monster.getName() << " hit you for " << monster.getDamage() << " damage.\n";
}

void fightMonster(Player& player)
{
  Monster monster{ Monster::getRandomMonster() };
  std::cout << "You have encountered a " << monster.getName() << " (" << monster.getSymbol() << ").\n";

  while (!monster.isDead() && !player.isDead())
  {
    std::cout << "(R)un or (F)ight: ";
    char input;
    std::cin >> input;
    if (input == 'R' || input == 'r')
    {
      if (getRandomNumber(1, 2) == 1)
      {
        std::cout << "You successfully fled.\n";
        return;
      }
      else
      {
        std::cout << "You failed to flee.\n";
        attackPlayer(monster, player);
        continue;
      }
    }

    if (input == 'F' || input == 'f')
    {
      attackMonster(player, monster);
      attackPlayer(monster, player);
    }
  }
}

int main()
{
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  std::rand();

  std::cout << "Enter your name: ";
  std::string playerName;
  std::cin >> playerName;

  Player player{ playerName };
  std::cout << "Welcome, " << player.getName() << '\n';

  while (!player.isDead() && !player.hasWon())
    fightMonster(player);

  if (player.isDead())
  {
    std::cout << "You died at level " << player.getLevel() << " and with " << player.getGold() << " gold.\n";
    std::cout << "Too bad you can't take it with you!\n";
  }
  else
  {
    std::cout << "You won the game with " << player.getGold() << " gold!\n";
  }

  return 0;
}
