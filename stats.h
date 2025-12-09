#ifndef STATS_H
#define STATS_H
#include <iostream>
using namespace std;

class MovieStatistics{
	int nstudents;
	int* movies;
	public:
		MovieStatistics(int);
		double average();
		int smallest();
		int highest();
		void print();
		~MovieStatistics();
};

#endif
