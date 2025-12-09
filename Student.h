#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string id;
    string name;
    int score;

public:
    Student();
    Student(string, string, int);
    string getID() const;
    string getName() const;
    int getScore() const;
};

#endif
