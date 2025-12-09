#ifndef CIMAGE256_H
#define CIMAGE256_H
#include "CImage.h"

class CImage256 : public CImage
{
	public:
		CImage256(char* file);
		~CImage256();
		void staticis();
		virtual void printHist();
		void conver256to2(int threshold, char* outfilename);
};

#endif

