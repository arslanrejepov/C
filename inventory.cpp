#include "inventory.h"

Inventory :: Inventory(int id=0,string descr="Unknown",int quantity=0){
	prodID=id;
	prodDescription=descr;
	qtyinStock=quantity;
}
Inventory :: Inventory(const Inventory &obj){
	prodID=obj.prodID;
	prodDescription=obj.prodDescription;
	qtyinStock=obj.qtyinStock;
	cout<<"Object is copied."<<endl;
}
Inventory :: ~Inventory(){
	cout<<"Product destroyed."<<endl;
}

int Inventory ::purchase(int quantity){
	if (quantity>0){
		qtyinStock+=quantity; 
		cout<<prodDescription<<" "<<prodID<<" bought "<<quantity<<endl;
	}
	return qtyinStock;
} 
int Inventory::sale(int quantity){
	if (quantity<qtyinStock){
		qtyinStock-=quantity; 
		cout<<prodDescription<<" "<<prodID<<" saled "<<quantity<<endl;
		return qtyinStock;
	}
	else{
		cout<<"Sale quantity is more than quantity in the Stock."<<endl;
		return -1;
	}
} 
void Inventory:: display(){
	cout<<"Product is "<<prodDescription<<endl
		<<"	ID is "<<prodID<<endl
		<<"	Number of product is "<<qtyinStock<<endl;
}
