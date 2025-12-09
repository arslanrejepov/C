#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    float real,imag;
    public:
    Complex(float =0,float=0);
    Complex operator+(Complex c2);
    Complex operator+();
    Complex operator*(Complex c2);
    Complex operator++();
    Complex operator++(int);
    bool operator>=(Complex c2);
    void print();

};

#endif
