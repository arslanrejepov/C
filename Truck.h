#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <iostream>
using namespace std;
class Truck : public Vehicle {
public:
    Truck(int year);
    void ApplyBreaks() override;
    void ApplyHorns() override;
};

#endif
