#ifndef CHARARRAY_H
#define CHARARRAY_H

#include <iostream>
#include <iomanip>
using namespace std;

class CharArray{
private:
    char *aPtr;
    int arraySize;
public:
    CharArray(CharArray &);
    CharArray(int size, char value);
    ~CharArray() { if (arraySize > 0) delete [] aPtr; }
    void print();
    void setValue(char value);
};

#endif