#include "Car.h"

Car::Car(int year) : Vehicle(year) {}

void Car::ApplyBreaks() {
    cout << "Car: Applying disc brakes." << endl;
}

void Car::ApplyHorns() {
    cout << "Car: Honking standard horn." << endl;
}
