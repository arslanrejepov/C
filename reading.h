#ifndef READING_H
#define READING_H
#include<iostream>
using namespace std;

struct TempScale{
	double fahrenheit,celsius;
};
class Reading{
	int windSpeed;
	double humidity;
	TempScale temperature;
	public:
		Reading(int=0,double=0.0,double=0.0,double=0.0);
		Reading(const Reading&);
		void showReading();
		void inputReading();
};

#endif
