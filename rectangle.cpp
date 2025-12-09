#include "rectangle.h"

int Rectangle::count=0;
double Rectangle::totalarea=0;

double Rectangle::getWidth(){
	return width;
}
double Rectangle::getLength(){
	return length;
}
double Rectangle::getArea(){
	return width*length;
}

Rectangle::Rectangle(double W,double L){
	width=W;
	length=L;
	count++;
	totalarea+=getArea();
}
Rectangle::~Rectangle(){
	count--;
	totalarea-=getArea();
}
double Rectangle::getTotalArea(){
	return totalarea;
}
int Rectangle::getCount(){
	return count;
}
