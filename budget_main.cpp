#include <iostream>
#include<iomanip>
#include "budget.h"
using namespace std;

double Budget::corpBudget=0;

int main(int argc, char** argv) {
	const int N_DIVISIONS=4;
	Budget divisions[N_DIVISIONS];
	for (int c=0;c<N_DIVISIONS;c++){
		double bud;
		cout<<"Enter the budget request for division ";
		cout<<(c+1)<<": ";
		cin>>bud;
		divisions[c].addBudget(bud);
	}
	
	cout<< setprecision(2);
	cout<<showpoint<<fixed;
	cout<<"\nHere are the division budget requests:\n";
	for (int c=0;c<N_DIVISIONS;c++){
		cout<<"Divisions "<<(c+1)<<"\t$ ";
		cout<< divisions[c].getDivBudget()<<endl;
	}
	
	cout<<"Total Budget Requests:\t$ ";
	cout<<divisions[0].getCorpBudget()<<endl;
	
	return 0;
}
