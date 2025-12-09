#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.1415;
class Circle{
	private:
		double radius;
        double ispositive(double r); //prototype of validation function
	public:
		Circle (double r=1){ radius=ispositive(r); }   //calling Constructor
		void setRadius(double r){ radius=ispositive(r); } //setting new radius 
        double getRadius(){ return radius; } //getting radius 
		double getArea(){ return PI*pow(radius,2);} //calculating and getting area
        double getCircumference(){ return 2*PI*radius;} //calculating and getting circumference
		~Circle(){ cout<<"Area of Circle Calculated."; }	// calling Destructor
};
double Circle:: ispositive(double r){ // cheking validation
    if(r<0 & r!=0){
        cout<<"Non valid input."<<endl; return -1;
    }
    else
        return r;
}


int main(int argc, char** argv) {
	Circle c1; //constructors defaul radius
	cout<<"Default Area of Circle: "<<c1.getArea()<<endl;
	c1.setRadius(10); //setting new radius 
    cout<<"Radius of Circle: "<<c1.getRadius()<<endl;
	cout<<"Area of Circle: "<<c1.getArea()<<endl;
    cout<<"Circumference of Circle: "<<c1.getCircumference()<<endl;
	return 0;
}
