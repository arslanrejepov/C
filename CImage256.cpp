#include "CImage256.h"

CImage256::CImage256(char* file) : CImage(file, 256)
{
	histptr = new int[colortype];
	for(int i = 0; i < colortype; i++)
		histptr[i] = 0;

	ifstream input(filename);
	if(input.fail()) {
		cout << filename << " can not be open!" << endl;
		exit(0);
	}
	for(int i = 0; i < NUM; i++)
		input >> pixels[i];

	input.close();
}

CImage256::~CImage256()
{
	if(histptr)
		delete[] histptr;
}

void CImage256::staticis()
{
	for(int i = 0; i < NUM; i++)
		if(pixels[i] >= 0 && pixels[i] < colortype)
			histptr[pixels[i]]++;
}

void CImage256::printHist()
{
	staticis();
	cout << "-----------HISTOGRAM----------\n";
	for(int j = 0; j < colortype; j++)
	{
		if(histptr[j] > 0) {
			cout << setw(3) << j << ": ";
			for(int k = 0; k < histptr[j]; k++)
				cout << "*";
			cout << endl;
		}
	}
}

void CImage256::conver256to2(int threshold, char* outfilename)
{
	ofstream out(outfilename);
	if(out.fail()) {
		cout << outfilename << " can not be created!" << endl;
		exit(0);
	}
	for(int i = 0; i < NUM; i++)
	{
		if(pixels[i] < threshold)
			out << 0 << " ";
		else
			out << 1 << " ";

		if((i + 1) % 10 == 0)
			out << endl;
	}
	out.close();
}

