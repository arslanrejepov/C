#include <iostream>
#include <iomanip>
#include "DivSales.h"

using namespace std;

int main() {
    DivSales divisions[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Enter sales for Division " << (i + 1) << ":\n";
        cin >> divisions[i];
    }
    for(int i=0;i<68;i++)
        cout<<"-";
    cout << "\nDiv No." << setw(15) << "Quarter1" << setw(15)
         << "Quarter2" << setw(15) << "Quarter3" << setw(15) << "Quarter4\n";

    for (int i = 0; i < 3; ++i) {
        for(int i=0;i<68;i++)
            cout<<"-";
        cout<<endl;    
        cout << setw(7) << (i + 1) << divisions[i] << endl;
    }
    for(int i=0;i<68;i++)
        cout<<"-";
    cout << "\nTotal Sales: " << DivSales::getTotalSales() << endl;
    for(int i=0;i<68;i++)
        cout<<"-";
    return 0;
}
