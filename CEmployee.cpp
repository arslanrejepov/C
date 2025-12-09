#include "CEmployee.h"

CEmployee::CEmployee(string name, string id, char gender, int age, string dept, double sal)
    : CPerson(name, id, gender, age), department(dept), salary(sal) {}

void CEmployee::Print() {
    Display();
    cout << "\t" << department << "\t\t" << salary << endl;
}
