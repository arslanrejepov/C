#include "Date.h"

int Date::daysInMonth[12]={31,28,31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string Date::monthName[12]={"January", "February", "March","April", "May", "June",
							"July", "August", "September","October", "November", "December"};

Date::Date(){
	cout<<"Input month and year: ";
	cin>>month>>year;
	daysInMonth[1]=(isLeap()?29:28);
}

bool Date::isLeap(){
	return ((year%4==0 && year%100!=0)||(year%100==0 && year%400==0));		
}

void Date::print(){
	cout<<"The enter date, "<<monthName[month-1]<<" "<<year<<" has "<<daysInMonth[month-1]<<endl;
}

void Date::today(){
	tm *local;
    time_t t;
    t = time(NULL); // Long value time after 0sec 0 hour in 1st January 1970
    local = localtime(&t); // conver time_t to UTC time+1900 
    int year=local->tm_year+1900;
	int month=local->tm_mon+1;
	cout<<"Current month, "<<monthName[month]<<" "<<year<<", has "<<daysInMonth[month]<<endl;
	
}
