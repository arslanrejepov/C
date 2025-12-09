#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(int argc, char** argv) {	
	int num;
	Rectangle *rpt,*arr;
	
	//create one instance of Rectangle
	rpt=new Rectangle(10.0,20.0);	
	//create num instances of Rectangle	
	cout<<"Please input the number of rectangles:";
	cin>>num;
	arr=new Rectangle[num];
	
	//printing total number and total area
	cout<<"The total number of rectangles is:"<<rpt->getCount()<<endl;
	cout<<"The total area of rectangles is:"<<Rectangle::getTotalArea()<<endl;
	cout<<"************************"<<endl<<endl;
	//destroy one instance
	delete rpt;
	rpt=NULL;
	cout<<"The total number of rectangles after delete one object is:"<<rpt->getCount()<<endl;
	cout<<"The total area of rectangles after delete one objectis:"<<Rectangle::getTotalArea()<<endl;
	cout<<"************************"<<endl<<endl;
	delete[]arr; 
	arr=NULL;
	cout<<"The total number of rectangles after delete all objects is:"<<Rectangle::getCount()<<endl;
	cout<<"The total area of rectangles after delete all objects  is:"<<Rectangle::getTotalArea()<<endl;
	cout<<"************************"<<endl;
	return 0;
}

