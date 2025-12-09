#include "Truck.h"

Truck::Truck(int year) : Vehicle(year) {}

void Truck::ApplyBreaks() {
    cout << "Truck: Applying air brakes." << endl;
}

void Truck::ApplyHorns() {
    cout << "Truck: Honking loud horn." << endl;
}
