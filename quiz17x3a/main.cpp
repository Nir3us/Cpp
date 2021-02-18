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

int main()
{
	Creature o{ "orc", 'o', 4, 2, 10 };
	o.addGold(5);
	o.reduceHealth(1);
	std::cout << "The " << o.getName() << " has " << o.getHealth() << " health and is carrying " << o.getGold() << " gold.\n";

	return 0;
}
