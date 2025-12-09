#include "familysavings.h"

int main(int argc, char** argv) {
	FamilySaving *Tom;
	Tom=new FamilySaving("Tom",100.00);   //string, double
	Tom->makeMoney(2000);
	Tom->spendPrivatesaving(500);
	Tom->printPrivatesaving();
	Tom->printPublicsaving();
  
	FamilySaving Lilly("Lilly",1200.00);  //string, double
	Lilly.spendPublicsaving(50);
  
	delete Tom; Tom=NULL;
  
	Lilly.printPrivatesaving();
	Lilly.printPublicsaving();
	Lilly.printPublicsaving();
  
	return 0;
  }
