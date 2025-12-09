#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
protected:
    int makeyear;

public:
    Vehicle(int year);
    virtual void ApplyBreaks() = 0;
    virtual void ApplyHorns() = 0;
    virtual ~Vehicle() {}
};

#endif
