#include "complex.h"

int main(){
    Complex c1(5.2,3.4),c2(3.1,3.0);
    cout<<"C1:"<<endl;
    c1.print();
    cout<<"C2:"<<endl;
    c2.print();
    cout<<"C3:"<<endl;
    cout<<"Addition:"<<endl;
    Complex c3=c1+c2;
    c3.print();
    cout << "Unary + on C1 (should be same as C1):" << endl;
    (+c1).print();
    cout<<"Multiplication"<<endl;
    c3=c1*c2;
    c3.print();
    cout << "Compare modulus (C1 >= C2): "<<(c1 >= c2?"True":"False")<<endl;
    cout << "Prefix ++C1:" << endl;
    (++c1).print();
    cout << "Postfix C1++:" << endl;
    (c1++).print();
    cout << "After postfix, C1 is now:" << endl;
    c1.print();
    return 0;
}