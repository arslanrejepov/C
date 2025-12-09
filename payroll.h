#ifndef PAYROLL_H
#define PAYROLL_H
#include<iostream>
using namespace std;

class PayRoll {
	private:
    	int ID;
	    int workHours;
	    double payRate;

	public:
	    PayRoll(int =1801, double =18.0, int = 20);
	    void setID(int id);
	    void setworkHours(int hours);
	    void setpayRate(double rate);	
	    int getID();
	    int getworkHours();
	    double getpayRate();	
	    double grossPay();
};

#endif

