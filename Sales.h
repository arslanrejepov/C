#ifndef SALES_H
#define	SALES_H
#include <iostream>
#include <iomanip>
using namespace std;

class Sales{
	private:
		int size; 	
		double *sales;
	public:
		Sales(int);
		~Sales();
		void getSales();	
		double totalSales();
		double highestSales();
		double lowestSales();
		double averageSales();
		void print();	
};

#endif
