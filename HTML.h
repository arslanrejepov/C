#ifndef HTML_H
#define HTML_H

#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

class HTML
{
private:
    Student *students;
    int count;

public:
    HTML(Student arr[], int c);
    ~HTML();

    friend ostream &operator<<(ostream &out, const HTML &table);
};

#endif