#ifndef POPULATION_H
#define POPULATION_H
#include<iostream>
using namespace std;

class Population{
	private:
		int numofppltn, numofbirth,numofdeath;
	public:
		Population(int,int,int);
		~Population();
		int pValidation(int);
		int bdValidation(int);
		void setPopulation(int);
		void setBirths(int);
		void setDeaths(int);
		float getBirthRate();
		float getDeathRate();
};


#endif
