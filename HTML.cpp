#include "HTML.h"

HTML::HTML(Student arr[], int c)
{
    count = c;
    students = new Student[count];
    for (int i = 0; i < count; i++)
    {
        students[i] = arr[i];
    }
}
HTML::~HTML()
{
    delete[] students;
}

ostream &operator<<(ostream &out, const HTML &table)
{
    out << left << setw(12) << "Student No"
        << setw(12) << "Student ID"
        << setw(20) << "Student Name"
        << setw(10) << "Score" << endl;

    out << "***************************************************" << endl;

    for (int i = 0; i < table.count; i++)
    {
        out << left << setw(12) << (i + 1)
            << setw(12) << table.students[i].getID()
            << setw(20) << table.students[i].getName()
            << setw(10) << table.students[i].getScore() << endl;
    }

    out << "***************************************************" << endl;
    return out;
}