#include "CharArray.h"

int main()
{
    CharArray first(5 , 'a');

    CharArray second = first;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Value stored in first object is ";
    first.print();
    cout << "Value stored in second object is ";
    second.print();
    cout << "Only the value in second object will " << endl;
    cout << "be changed.\n";

    second.setValue('z');

    cout << "Value stored in first object is ";
    first.print();
    cout << endl << "Value stored in second object is ";
    second.print();
    return 0;
}