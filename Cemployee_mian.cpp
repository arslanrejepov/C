#include <iostream>
#include "CEmployee.h"

int main() {
    cout << "Name\tID\tGender(F/M)\tAge\tDepartment\tSalary" << endl;
    cout << "***********************************************************" << endl;

    CEmployee emp("Jack", "100001", 'F', 23, "Development", 90000);
    emp.Print();

    return 0;
}
