#include "complex.h"

Complex ::Complex(float r,float i): real(r),imag(i){}

Complex Complex:: operator+(Complex c2){
    return Complex(real+c2.real,imag+c2.imag);
}
Complex Complex:: operator+(){
    return *this;
}
Complex Complex:: operator*(Complex c2){
    return Complex(real * c2.real - imag * c2.imag,real * c2.imag + imag * c2.real);
}
Complex Complex:: operator++(){
    ++real;++imag;
    return *this;
}
Complex Complex:: operator++(int){
    Complex temp=*this;
    real++; imag++;
    return temp;
}
bool Complex:: operator>=(Complex c2){
    return (sqrt(pow(real,2)+pow(imag,2))>=sqrt(pow(c2.real,2)+pow(c2.imag,2)));
}
void Complex::print(){
    cout<<"real="<<real<<"."<<endl
        <<"imag="<<imag<<"."<<endl;
}