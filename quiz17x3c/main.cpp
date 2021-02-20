#include <iostream>
#include <string>

class Creature
{
protected:
	std::string m_name;
	char m_symbol;
	int m_health;
	int m_damage;
	int m_gold;

public:
	Creature(std::string_view name, char symbol, int health, int damage, int gold):
		m_name{ name },
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
	bool hasWon() const { return m_level >= 20; }
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
};

int main()
{
	std::cout << "Enter your name: ";
	std::string playerName;
	std::cin >> playerName;

	Player p{ playerName };
	std::cout << "Welcome, " << p.getName() << ".\n";

	std::cout << "You have " << p.getHealth() << " health and are carrying " << p.getGold() << " gold.\n";

	return 0;
}
