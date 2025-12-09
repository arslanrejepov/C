#include "intRange.h"

int main(){
	cout<<"Enter integers 0-100."<<endl
		<<"Enter 0 to exit program."<<endl;

	IntRange intN(12);
	int num=intN.getNumber();
			
	while(num!=0){
		cout<<"You entered "<<num<<endl;
		num=intN.getNumber();
	}
	cout<<"PROGRAM EXIT.";
	return 0;
}
