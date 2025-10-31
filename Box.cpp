#include<iostream>
using namespace std;

class Box{
    private:
        double width;
        double length;
        double height;
        double ispositive(double n);
    public:
        Box(double w=1, double l=1, double h=1){ //creating a constructor with default values
            width = w;
            length = l;
            height = h;
        }
        //setting the values
        void setWidth(double w){ width = ispositive(w); }
        void setLength(double l){ length = ispositive(l); }
        void setHeight(double h){ height = ispositive(h); }
        // calculating the volume and surface area
        double calculateVolume(){return width * length * height;}
        double surfaceArea(){return 2*(width*length + length*height + height*width);}
        ~Box(){cout << "Volume and Surface Area is Succesfully calculated." << endl;}
};
double Box::ispositive(double n){      //check validation 
	if(n<0 & n!=0){ 
		cout<<"Non valid input."; return 1;
	}
	else
		return n;
}


int main(){
    Box box1, box2(2, 3, 4); //creating two objects of Box class
    //displaying the default values of box1
    cout << "DEFAULT Volume of box1: " << box1.calculateVolume() << endl;
    cout << "DEFAULT Surface area of box1: " << box1.surfaceArea() << endl;
    //displaying the values of box2
    cout << "Volume of box2: " << box2.calculateVolume() << endl;
    cout << "Surface area of box2: " << box2.surfaceArea() << endl;
    // set the new values 
    box1.setWidth(2);
    box1.setLength(3);
    box1.setHeight(4);
    cout << "New Volume of box1: " << box1.calculateVolume() << endl;
    cout << "New Surface area of box1: " << box1.surfaceArea() << endl;
}
