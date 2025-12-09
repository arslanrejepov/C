#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
#include <iomanip>
using namespace std;

class NumberArray{
private:
    double *aPtr;
    int arraySize;
public:
    NumberArray(NumberArray &);
    NumberArray(int size, double value);
    ~NumberArray() { if (arraySize > 0) delete [] aPtr; }
    void print();
    void setValue(double value);
};

#endif