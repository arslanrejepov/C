#include<iostream>
using namespace std;

class Date{
    int day, month, year;
    bool validDate(int, int, int);   //function prototype
    //creating an array of month names
    string monthName[12] = {"January", "February", "March", 
                            "April", "May", "June", 
                            "July", "August", "September", 
                            "October", "November", "December"};
    public:
        Date(int d=1, int m=1, int y=2001){
            day = d;
            month = m;
            year = y;
        }
        void setDate(int d, int m, int y){
            if(validDate(d, m, y)){
                day = d;
                month = m;
                year = y;
            }
            else
                cout<<"Invalid date"<<endl;
        }
        void displayForm1(){       
            cout<<day<<"/"<<month<<"/"<<year<<endl;
            }
        void displayForm2(){
            cout<<day<<" "<<monthName[month-1]<<" "<<year<<endl;   
        }
        void displayForm3(){
            cout<<monthName[month-1]<<" "<<day<<", "<<year<<endl;
        }
    };
//function definition of validDate()
bool Date::validDate(int day, int month, int year){
    if(day>=1 || day<=31 & month>=1 || month<=12 & year>=1950 || year<=2020){
        if (month ==2){        // febraury has difference from another months
            if(year%4==0){    //in leap year february has 29 days
                return day<=29 ?  true : false;
            }
            else{          //in non-leap year february has 28 days
                return day<=28 ? true : false;
            }
        }
        // and april, june, september, november has 30 days
        else if(month==4 || month==6 || month==9 || month==11){
            return day<=30 ? true : false;
        }
        }
    else // return false if date is invalid
        return false;
}
int main(){
    Date d1; // creating object of Date class with defail values
    //displaying date in different formats
    d1.displayForm1();
    d1.displayForm2();
    d1.displayForm3();
    //setting new date and diplays in different formats
    d1.setDate(17,3,2003);
    d1.displayForm1();
    d1.displayForm2();  
    d1.displayForm3();
    return 0;
}