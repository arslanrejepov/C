#include "population.h"


int main() {
	Population p1(12,18,24);
	cout<<"Birth rate is "<<p1.getBirthRate()*100<<"%."<<endl;
	cout<<"Death rate is "<<p1.getDeathRate()*100<<"%."<<endl;
	p1.setBirths(6);
	cout<<"Birth rate after update is "<<p1.getBirthRate()*100<<"%."<<endl;
	p1.setDeaths(8);
	cout<<"Death rate after update  is "<<p1.getDeathRate()*100<<"%."<<endl;
	
	return 0;
}
