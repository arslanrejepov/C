#include "CImage.h"

CImage::CImage(char*file,int colors)
{
	strcpy(filename,file);
	colortype=colors;
}

CImage::~CImage()
{
}