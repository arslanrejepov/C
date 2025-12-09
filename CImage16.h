#ifndef CIMAGE16_H
#define CIMAGE16_H
#include "CImage.h"

class CImage16 : public CImage
{
	public:
		CImage16(char* file);
		~CImage16();
		void staticis();
		virtual void printHist();
		void conver16to2(int threshold, char* outfilename);
};

#endif

