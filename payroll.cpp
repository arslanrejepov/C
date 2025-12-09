#include "Payroll.h"

PayRoll::PayRoll(int id, double rate, int hours) {
    ID = id;
    payRate = rate;
    workHours = hours;
}

void PayRoll::setID(int id) {
    ID = id;
}

void PayRoll::setworkHours(int hours) {
    workHours = hours;
}

void PayRoll::setpayRate(double rate) {
    payRate = rate;
}

int PayRoll::getID(){
    return ID;
}

int PayRoll::getworkHours(){
    return workHours;
}

double PayRoll::getpayRate(){
    return payRate;
}

double PayRoll::grossPay(){
    return payRate * workHours;
}

