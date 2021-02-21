#include <array>
#include <iostream>
#include <string>
#include <string_view>

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

  const std::string& getName() const { return m_name; }
  char getSymbol() const { return m_symbol; }
  int getHealth() const { return m_health; }
  int getDamage() const { return m_damage; }
  int getGold() const { return m_gold; }

  void reduceHealth(int health) { m_health -= health; }
  bool isDead() const { return m_health <= 0; }
  void addGold(int gold) { m_gold += gold; }
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
};

int main()
{
  Monster m{ Monster::Type::orc };
  std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";

  return 0;
}
