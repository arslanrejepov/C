#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <iostream>
using namespace std;
class Car : public Vehicle {
public:
    Car(int year);
    void ApplyBreaks() override;
    void ApplyHorns() override;
};

#endif
