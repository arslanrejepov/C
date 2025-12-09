#include "CPerson.h"

CPerson::CPerson(string name, string id, char gender, int age) {
    this->name = name;
    this->id = id;
    this->gender = gender;
    this->age = age;
}

void CPerson::Display() {
    cout << name << "\t" << id << "\t" << gender << "\t" << age;
}
