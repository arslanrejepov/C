#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include "CPerson.h"

class CEmployee : public CPerson {
private:
    string department;
    double salary;

public:
    CEmployee(string name, string id, char gender, int age, string dept, double sal);
    void Print();
};

#endif
