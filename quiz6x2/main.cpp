#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstddef>


struct student
{
    std::string name{};
    short grade{};
};

int getNumberOfStudents()
{
  int numberOfStudents{};

  do
  {
    std::cout << "How many students do you want to enter? ";
    std::cin >> numberOfStudents;
  } while (numberOfStudents <= 0);

  return numberOfStudents;
}

std::vector<student> getStudent()
{
    using vector_type = std::vector<student>;

  int numberOfStudents{ getNumberOfStudents() };


  vector_type students(static_cast<vector_type::size_type>(numberOfStudents));

  int studentNumber{ 1 };

  for (auto& student : students)
  {
    std::cout << "Enter name #" << studentNumber << ": ";
    std::cin >> student.name;
    std::cout << "Enter grade #" << studentNumber << ": ";
    std::cin >> student.grade;

    ++studentNumber;
  }

  return students;
}

bool order(const student& a, const student& b)
{
    return (a.grade > b.grade);
}

int main()
{
    int{getNumberOfStudents()};

    auto students{getStudent()};


    std::sort(students.begin(), students.end(), order);

    for(const auto& student : students)
    {
        std::cout << student.name << " got the grade " << student.grade << '\n';
    }

    return 0;
}
