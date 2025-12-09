#ifndef CPERSON_H
#define CPERSON_H

#include <string>
#include <iostream>
using namespace std;

class CPerson {
protected:
    string name;
    string id;
    char gender;
    int age;

public:
    CPerson(string name, string id, char gender, int age);
    void Display();
};

#endif
