#include "intRange.h"

IntRange::IntRange(int num){
	number=num;
}

int IntRange::getNumber()
{
    cin>>number;
    cin.ignore();

    while (cin.fail() || number<0 || number>100)
    {
        cout << "That is not a valid number.\n";
        cin.clear();
        cin.sync();
        cin>>number;
    }
    return number;
}
