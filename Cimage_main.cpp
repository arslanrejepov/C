#include "CImage2.h"
#include "CImage16.h"
#include "CImage256.h"

int main(int argc, char** argv) {
	CImage2 obj2("image2.txt");
	obj2.printHist();

	CImage16 obj16("image16.txt");
	obj16.printHist();
	obj16.conver16to2(5, "out16.txt");

	CImage256 obj256("image256.txt");
	obj256.printHist();
	obj256.conver256to2(128, "out256.txt");

	return 0;
}



	
