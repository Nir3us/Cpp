#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct StudentGrade
{
	std::string name{};
	char grade{};
};

class GradeMap
{
private:
	std::vector<StudentGrade> m_map{};

public:
	char& operator[](const std::string &name);
};

char& GradeMap::operator[](const std::string &name)
{
	auto found{ std::find_if(m_map.begin(), m_map.end(),
				[&](const auto& student){
  					return (student.name == name);
				}) };

	if (found != m_map.end())
	{
		return found->grade;
	}

	m_map.push_back({ name });

	return m_map.back().grade;
}

int main()
{
	GradeMap grades{};

	grades["Norbert"] = 'A';
	grades["Maik"] = 'B';

	std::cout << "Norbert has a grade of " << grades["Norbert"] << '\n';
	std::cout << "Maik has a grade of " << grades["Maik"] << '\n';

	return 0;
}
