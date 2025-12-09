#include "reading.h"

int main() {
    Reading r1(37, 32, 32, 0); 
    Reading r2;                

    cout << "Default Reading r1:"<<endl;
    r1.showReading();

    cout << "Input new Reading for r2:"<<endl;
    r2.inputReading();

    Reading r3 = r2;

    cout << "Copied Reading r3 from r2:"<<endl;
    r3.showReading();

    return 0;
}
