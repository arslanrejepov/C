#include "Sales.h"

Sales::Sales(int s){
	size=s;
	sales=new double [size];
}
Sales::~Sales(){
	delete[] sales;
	sales=NULL;
}
void Sales::getSales(){
	for (int count = 0; count < size; count++){
		cout << "Enter the sales " << (count + 1) << ": ";
		cin >> sales[count];
 }
}

double Sales::totalSales(){
	double sum = 0.0;
	for (int count = 0; count < size; count++)
		sum +=sales[count];
 	return sum;
}
double Sales::highestSales(){
	double max=sales[0];
	for (int c=1;c<size;c++)
		max=max<sales[c]?sales[c]:max;
	return max;
}
double Sales::lowestSales(){
	double min=sales[0];
	for (int c=1;c<size;c++)
		min=min>sales[c]?sales[c]:min;
	return min;
}
double Sales::averageSales(){
	return totalSales()/static_cast<double>(size);
}
void Sales::print(){
	cout<< setprecision(2);
	cout<< fixed << showpoint;
	cout<< "The total sales for the year are $"<<totalSales() << endl
		<<"The Highest sale for the year is $"<<highestSales() << endl
		<<"The Lowest sale for the year is $"<<lowestSales() << endl
		<<"The average sale for the year is $"<<averageSales()<<endl;
}
