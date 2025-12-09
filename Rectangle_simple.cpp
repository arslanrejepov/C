#include <iostream>
#include <cmath>
#define precision 1.0e-6
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double=2.0,double=1.0);
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double getArea();
    bool isSquare();
};

Rectangle::Rectangle(double len, double w) {
    setLength(len);
    setWidth(w);
}

void Rectangle::setLength(double len) {
    if (len >= 0)
        length = len;
    else {
        length = 1.0;
        cout << "Invalid length. Using a default value of 1.\n";
    }
}

void Rectangle::setWidth(double w) {
    if (w >= 0)
        width = w;
    else {
        width = 1.0;
        cout << "Invalid width. Using a default value of 1.\n";
    }
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getArea() {
    return length * width;
}

bool Rectangle::isSquare() {
    return abs(length-width)<precision ? true : false;
}

int main() {
    Rectangle r1(3.0, 3.0), r2(4.0 , 8.0);
    cout<<"Area of r1 is "<<r1.getArea()<<endl
        <<" Length of r1 is "<<r1.getLength()<<endl
        <<" Width of r1 is "<<r1.getWidth()<<endl;
    cout<<(r1.isSquare() ? " This is a square." : " This is not sqaure.")<<endl;
    
    cout<<"Area of r2 is "<<r2.getArea()<<endl
        <<" Length of r2 is "<<r2.getLength()<<endl
        <<" Width of r2 is "<<r2.getWidth()<<endl;
    cout<<(r2.isSquare() ? " This is a square." : " This is not sqaure.")<<endl;

    return 0;
}