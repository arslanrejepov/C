#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string>
#include <ctime>
using namespace std;

class Date{
	private:
		int year,month;
		static int daysInMonth[12];
		static string monthName[12];
	public:
		Date();
		bool isLeap();
		void print();
		void today();
};

#endif
