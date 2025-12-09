#include <iostream>
#include "Payroll.h"
using namespace std;

int main() {
    PayRoll employees[7];

    for (int i = 0; i < 7; i++) {
        int id, hours;
        double rate;
        cout << "Employee " << i + 1 << " ID: ";
        cin >> id;
        cout << "Hours worked: ";
        cin >> hours;
        cout << "Hourly rate: ";
        cin >> rate;
        employees[i].setID(id);
        employees[i].setworkHours(hours);
        employees[i].setpayRate(rate);
    }

    cout << "\nEmployee Gross Pays:\n";
    for (int i = 0; i < 7; i++) {
        cout << "ID: " << employees[i].getID()
             << ", Gross Pay: $" << employees[i].grossPay() << endl;
    }

    return 0;
}

