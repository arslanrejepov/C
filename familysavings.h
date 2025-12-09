#ifndef FAMILYSAVINGS_H
#define FAMILYSAVINGS_H
#include <iostream>
#include <string>
using namespace std;

class FamilySaving{
	private:
		string name;
		double privateMoney;
		static double publicMoney;
		static string familyName;
	public:
		FamilySaving(string,double);
    	void makeMoney(double);
    	static void spendPublicsaving(double);
    	void spendPrivatesaving(double);
    	void printPrivatesaving();
    	static void printPublicsaving();
    	~FamilySaving();
};

#endif
