#ifndef INVENTORY_H
#define INVENTORY_H
#include<iostream>
#include<string>
using namespace std;

class Inventory{
	private:
		int prodID;
		string prodDescription;
		int qtyinStock;
	public:
		Inventory(int,string,int);
		Inventory(const Inventory&);
		~Inventory();
		int purchase(int );
		int sale(int );
		void display();
		
};

#endif
