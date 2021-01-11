#include <iostream>
#include <string>
#include <string_view>
#include <random>
#include <array>

class MonsterGenerator;

    class Monster
    {
    public:
        enum Type
    {
    dragon,
    goblin,
    ogre,
    orc,
    skeleton,
    troll,
    vampire,
    zombie,
    max_monster_types
    };

    private:
        Type m_type{};
        std::string m_name{};
        std::string m_roar{};
        int m_hitPoints{};

    public:
        Monster(Monster::Type type, const std::string name, const std::string roar, int hitPoints)
                    : m_type{ type }, m_name{ name }, m_roar{ roar }, m_hitPoints{ hitPoints }
                {
                }

       std::string_view getTypeString() const
	{
		switch (m_type)
		{
		case Type::dragon: return "dragon";
		case Type::goblin: return "goblin";
		case Type::ogre: return "ogre";
		case Type::orc: return "orc";
		case Type::skeleton: return "skeleton";
		case Type::troll: return "troll";
		case Type::vampire: return "vampire";
		case Type::zombie: return "zombie";
		default: return "???";
		}
	}
        void print()
        {
            std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << ". \n";
        }
        friend class MonsterGenerator;
    };

    class MonsterGenerator
    {
    public:

        static int getRandomNumber(int min, int max)
	{
		static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0) };
		return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
	}

        static Monster generateMonster()
	{
	    auto type{ static_cast<Monster::Type>(getRandomNumber(0, static_cast<int>(Monster::Type::max_monster_types) - 1)) };
		int hitPoints{ getRandomNumber(1, 100) };


		static constexpr std::array s_names{"Fane", "Melody", "Nireus", "Suerim", "Maik", "Syberia"};
		static constexpr std::array s_roars{"*SZSZSZ*", "*AAAA*", "*HIAH*", "*EEEE*", "*GRRR*", "*RAR*"};


		auto name{ s_names[static_cast<std::size_t>(getRandomNumber(0, s_names.size()-1))] };
		auto roar{ s_roars[static_cast<std::size_t>(getRandomNumber(0, s_roars.size()-1))] };

		return { type, name, roar, hitPoints };
	}
    };




int main()
{
    Monster m{ MonsterGenerator::generateMonster() };
	m.print();

    return 0;
}
