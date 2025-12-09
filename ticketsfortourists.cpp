#include <iostream>
#include <iomanip>
using namespace std;
// i just arrays out of of fucntions to make them global
const int tourist_num=5; // number of tourists
int tourists[tourist_num],prices[tourist_num]; // here creating array which saves ages of tourists and prices of tickets

void tourist_ages(int tourists[tourist_num]){
	cout<<"Please input ages of "<<tourist_num<<" tourist:"<<endl;
	for (int i=0;i<tourist_num;i++){
		cin>>tourists[i];   //here we are initilaizing and saving ages in array
	}
}

void ticket_prices(int tourist[tourist_num],int prices[tourist_num]){ //initilaizing and saving prices for ages
	for(int i=0;i<tourist_num;i++){
		if (tourist[i]<10 || tourist[i]>60)
			prices[i]=80*0.5;
		else
			prices[i]=80;
	}
}

int totalsum(int prices[tourist_num]){ //calculating total sum of prices
	int total=0;
	for(int i=0;i<tourist_num;i++){
		total+=prices[i];
	}
	return total;
}

int main(int argc, char** argv) {
	
	tourist_ages(tourists);
	ticket_prices(tourists,prices);
	cout<<left<<setw(10)<<"age"<<setw(10)<<"price"<<setw(10)<<"Money"<<endl;
	cout<<"-----------------------------"<<endl;
	for (int i=0;i<tourist_num;i++){
		cout<<left<<setw(10)<<tourists[i]<<setw(10)<<prices[i]<<endl;
	}
	cout<<left<<setw(10)<<"Total"<<setw(10)<<totalsum(prices)<<setw(10)<<"RMB"<<endl;
	return 0;
}
