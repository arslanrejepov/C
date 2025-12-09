#ifndef CIMAGE2_H
#define CIMAGE2_H

#include "CImage.h"

class CImage2 : public CImage
{
	public:
		CImage2(char*file);
		~CImage2();
	void staticis()	;
	virtual void printHist();	
	protected:
};

#endif