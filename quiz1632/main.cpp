#include <functional>
#include <iostream>
#include <string>
#include <vector>

class Teacher
{
private:
  std::string m_name{};

public:
  Teacher(const std::string& name)
      : m_name{ name }
  {
  }

  const std::string& getName() const { return m_name; }
};

class Department
{
private:
  std::vector<std::reference_wrapper<const Teacher>> m_teachers{};

public:
  void add(const Teacher& teacher)
  {
    m_teachers.push_back(teacher);
  }

  friend std::ostream& operator<<(std::ostream& out, const Department& department)
  {
    out << "Department: ";

    for (const auto& teacher : department.m_teachers)
    {
      out << teacher.get().getName() << ' ';
    }

    out << '\n';

    return out;
  }
};

int main()
{
  Teacher t1{ "Bob" };
  Teacher t2{ "Frank" };
  Teacher t3{ "Beth" };

  {    Department department{};

    department.add(t1);
    department.add(t2);
    department.add(t3);

    std::cout << department;

  }

  std::cout << t1.getName() << " still exists!\n";
  std::cout << t2.getName() << " still exists!\n";
  std::cout << t3.getName() << " still exists!\n";

  return 0;
}
