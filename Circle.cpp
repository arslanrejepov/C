#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.1415;
class Circle{
	private:
		double radius;
        double ispositive(double r);
	public:
		Circle (double r=1){ radius=ispositive(r); } // creating Constructor
		void setRadius(double r){ radius=ispositive(r); }
		double getArea(){ return PI*pow(radius,2);}
		~Circle(){ cout<<"Area of Circle Calculated."; } // creating Destructor
};
double Circle:: ispositive(double r){ // cheking validation
    if(r<0 & r!=0){
        cout<<"Non Valid input ."<<endl; return -1;
    }
    else
        return r;
}


int main(int argc, char** argv) {
	Circle c1; //constructors defaul radius
	cout<<"Default Area of Circle: "<<c1.getArea()<<endl;
	c1.setRadius(10); //setting new radius 
	cout<<"Area of Circle: "<<c1.getArea()<<endl;
	return 0;
}
