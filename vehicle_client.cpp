#include <iostream>
#include "Truck.h"
#include "Car.h"

int main() {
    Vehicle* myTruck = new Truck(2020);
    Vehicle* myCar = new Car(2022);

    myTruck->ApplyBreaks();
    myTruck->ApplyHorns();

    myCar->ApplyBreaks();
    myCar->ApplyHorns();

    delete myTruck;
    delete myCar;

    return 0;
}
