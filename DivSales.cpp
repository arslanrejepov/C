#include "DivSales.h"
#include <iostream>
#include <iomanip>

using namespace std;

double DivSales::totalSales = 0.0;

istream& operator>>(istream& in, DivSales& obj) {
    for (int i = 0; i < 4; ++i) {
        double value;
        do {
            cout << "  Enter sales for Quarter " << (i + 1) << ": ";
            in >> value;
            if (value < 0)
                cout << "    Invalid. Enter a positive value.\n";
        } while (value < 0);
        obj.sales[i] = value;
        DivSales::totalSales += value;
    }
    return in;
}

ostream& operator<<(ostream& out, const DivSales& obj) {
    for (int i = 0; i < 4; ++i)
        out << setw(15) << obj.sales[i];
    return out;
}

double DivSales::operator[](int index) const {
    if (index < 0 || index >= 4) {
        cerr << "Index out of range.\n";
        return 0;
    }
    return sales[index];
}

double DivSales::getTotalSales() {
    return totalSales;
}
