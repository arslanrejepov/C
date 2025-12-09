#ifndef CIMAGE_H
#define CIMAGE_H
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;
#define NUM 100
class CImage
{
	public:
		CImage(char*,int);
		~CImage();
		virtual void printHist()=0;
	protected:
		char filename[50];
		int colortype;
		int pixels[100];
		int *histptr;
};

#endif