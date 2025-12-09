#include "Sales.h"

int main(){
	cout<<"Number of size:";
	int num;
	cin>>num;
	Sales s1(num);
	s1.getSales();
	s1.print();
	
	return 0;
}
