#include <iostream>
#include <cctype>
#include "CharRange.h"
using namespace std;

CharRange::CharRange(char l, char u)
{
    lower = toupper(l);
    upper = toupper(u);
}

char CharRange::getChar()
{
    cin.get(input);
    cin.ignore();
    input = toupper(input);

    while (input < lower || input > upper)
    {
        cout << "That is not a valid character.\n";
        cout << "Enter a value from " << lower;
        cout << " to " << upper << ".\n";
        cin.get(input);
        cin.ignore();
        input = toupper(input);
    }
    return input;
}
