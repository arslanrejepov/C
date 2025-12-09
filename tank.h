#ifndef TANK_H
#define TANK_H
#include<iostream>
using namespace std;


class Tank{
	private:
		int gallons;
	public:
		Tank();
		Tank(int);
		Tank(const Tank &);
		int getGallons();
		~Tank();
};

#endif

