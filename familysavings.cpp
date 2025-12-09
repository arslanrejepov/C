#include "familysavings.h"

double FamilySaving::publicMoney=0;
string FamilySaving::familyName=" Turing";

FamilySaving::FamilySaving(string name, double money){
	this->name=name+familyName;
	publicMoney+=(money*0.4);
	privateMoney+=(money*0.6);
	cout<<this->name<<"'s income is "<<money<<"$"<<endl
		<<"Family balance :+"<<privateMoney<<"$"<<endl
		<<this->name<<"'s balance :+"<<publicMoney<<"$"<<endl;
}

void FamilySaving::makeMoney(double money){
	publicMoney+=(money*0.4);
	privateMoney+=(money*0.6);
	cout<<name<<"'s income is "<<money<<"$"<<endl
		<<"Family balance :+"<<privateMoney<<"$"<<endl
		<<name<<"'s balance :+"<<publicMoney<<"$"<<endl;
}
void FamilySaving::spendPublicsaving(double money){
	if (money>publicMoney){
		cout<<"Your Family balance have less money."<<endl
			<<"Please check your balance!"<<endl;
	}
	else{
		publicMoney-=money;
		cout<<"Family balance :-"<<money<<"$."<<endl;
	}
}
void FamilySaving::spendPrivatesaving(double money){
		if (money>privateMoney){
		cout<<name<<" your  balance have less money."<<endl
			<<"Please check your balance!"<<endl;
	}
	else{
		privateMoney-=money;
		cout<<name<<"'s balance :-"<<money<<"$."<<endl;
	}
}
void FamilySaving::printPrivatesaving(){
	cout<<name<<" 's balance is "<<privateMoney<<"$."<<endl;
}
void FamilySaving::printPublicsaving(){
	cout<<"Family balance is "<<publicMoney<<"$."<<endl;
}
FamilySaving::~FamilySaving(){
	publicMoney+=privateMoney;
	cout<<"Done Succesfully."<<endl;
}
