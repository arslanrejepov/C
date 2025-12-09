#include "CImage2.h"

CImage2::CImage2(char*file):CImage(file,2)
{
	histptr=new int[colortype];
	for(int j=0;j<colortype;j++)
		histptr[j]=0;	
	//reading imagefile
	ifstream input(filename);
	if(input.fail()){

		cout<<filename<<" can not be open!"<<endl;
		exit(0);
	}
	for(int i=0;i<NUM;i++ )
		input>>pixels[i];

	input.close();
}

CImage2::~CImage2()
{
	if(!histptr)
		delete[] histptr;
	
}

void CImage2::staticis(){
	for(int i=0;i<NUM;i++ )
	{
		for(int j=0;j<colortype;j++)
			if(pixels[i]==j)	
				histptr[j]++;						
	}
}

void CImage2::printHist(){
	staticis();
	cout<<"-----------HISTGRAM----------\n";
	for(int j=0;j<colortype;j++)
	{
		cout<<setw(2)<<j<<":";
		for(int i=0;i<histptr[j];i++)	
			cout<<"*";
		cout<<endl;
	}

}