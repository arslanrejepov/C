#include "NumberArray.h"

NumberArray::NumberArray(NumberArray &obj)
{
    arraySize = obj.arraySize;
    aPtr = new double[arraySize];
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = obj.aPtr[index];
}

NumberArray::NumberArray(int size, double value)
{
    arraySize = size;
    aPtr = new double[arraySize];
    setValue(value);
}

void NumberArray::setValue(double value)
{
    for (int index = 0; index < arraySize; index++)
        aPtr[index] = value;
}

void NumberArray::print()
{
    for (int index = 0; index < arraySize; index++)
        cout << aPtr[index] << " ";
    cout << endl;
}