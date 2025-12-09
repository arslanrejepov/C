#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
	double width,length;
	static int count;
	static double totalarea;
	public:
		double getWidth();
		double getLength();
		double getArea();
		Rectangle(double=1.0,double = 2.0);
		~Rectangle();
		static double getTotalArea();
		static int getCount();
};

#endif
