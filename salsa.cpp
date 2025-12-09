#include "salsa.h"

Salsa::Salsa(char* datafile){
	ifstream infile;
	infile.open(datafile);
	if (!infile.is_open()){
		cout<<"Your file do not exist!"<<endl;
		return;
	}
	int i=0;
	while (infile>>sales[i])
		i++;
	infile.close();
}
void Salsa::print(){
	cout<<setw(10)<<"Sales"<<setw(15)<<"SaleData"<<endl;
	for (int i=0;i<60;i++)
		cout<<"-";
	cout<<endl;
	
	for(int i=0;i<5;i++)
		cout<<i<<setw(10)<<types[i]<<setw(10)<<sales[i]<<endl;
		
	for(int i1=0;i1<2;i1++){
		for(int i2=0;i2<60;i2++)
			cout<<"-";
		cout<<endl;
	}

	int min=smallestSale();
	int max=largestSale();
	cout<<"The smallest sale is:"<<min+1<<setw(15)<<types[min]<<
													setw(10)<<sales[min]<<endl
		<<"The largest sale is :"<<max+1<<setw(15)<<types[max]<<
													setw(10)<<sales[max]<<endl;
	
for(int i1=0;i1<2;i1++){
		for(int i2=0;i2<60;i2++)
			cout<<"-";
		cout<<endl;
	}
}
int Salsa::smallestSale(){
	int min=sales[0];
	int k=0;
	for (int c=1;c<5;c++){
		if (sales[c]<min)
			min=sales[c];
			k=c;
	}
	return k;
}
	
int Salsa::largestSale(){
	int max=sales[0];
	int k=0;
	for (int c=1;c<5;c++){
		if (sales[c]>max){
			max=sales[c];
			k=c;
		}
	}
	return k;
}

