#include "CharArray.h"

CharArray::CharArray(CharArray &obj)
{
    arraySize = obj.arraySize;
    aPtr = new char[arraySize];
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = obj.aPtr[index];
}

CharArray::CharArray(int size, char value)
{
    arraySize = size;
    aPtr = new char[arraySize];
    setValue(value);
}

void CharArray::setValue(char value)
{
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = value;
}

void CharArray::print()
{
    for (int index = 0; index < arraySize; index++)
        cout << aPtr[index] << " ";
    cout << endl;
}