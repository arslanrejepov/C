#include "population.h"

int Population::pValidation(int num){
	return (num<2?2:num);
}
int Population::bdValidation(int num){
	return (num<0?0:num);
}
Population:: Population(int b,int d,int p){
	numofppltn=pValidation(p);
	numofbirth=bdValidation(b);
	numofdeath=bdValidation(d);
}

void Population::setPopulation(int num){
	numofppltn=pValidation(num);
}
void Population::setBirths(int num){
	numofbirth=bdValidation(num);
}
void Population::setDeaths(int num){
	numofdeath=bdValidation(num);
}
float Population::getBirthRate(){
	float result=(numofbirth*1.0)/(numofppltn*1.0);
	return (result);
}
float Population::getDeathRate(){
	float result=(numofdeath*1.0)/(numofppltn*1.0);
	return (result);
}
Population::~Population(){
	cout<<"Birth and Death rates are calculated."<<endl;
}
