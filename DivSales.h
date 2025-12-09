#ifndef DIVSALES_H
#define DIVSALES_H

#include <iostream>

class DivSales {
private:
    double sales[4];
    static double totalSales;

public:
    friend std::istream& operator>>(std::istream& in, DivSales& obj);
    friend std::ostream& operator<<(std::ostream& out, const DivSales& obj);
    double operator[](int index) const;
    static double getTotalSales();
};

#endif
