#include "Student.h"

Student::Student() {}

Student::Student(string id, string name, int score)
{
    this->id = id;
    this->name = name;
    this->score = score;
}

string Student::getID() const
{
    return id;
}

string Student::getName() const
{
    return name;
}

int Student::getScore() const
{
    return score;
}
