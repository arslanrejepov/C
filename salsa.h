#ifndef SALSA_H
#define SALSA_H
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class Salsa{
	private:
		string types[5]={"mild","medium","sweet","hot","zesty"};
		int sales[5];
		char datafile[20];
	public:
		Salsa(char*);
		void print();
		int smallestSale();
		int largestSale();
};


#endif
