#include "inventory.h"

int main(){
	Inventory product1(1234,"Lenovo PC",2),product3(124,"HP Laptop",7);
	Inventory product2=product3;
	
	product1.purchase(10);
	product1.sale(5);
	product1.display();
	product2.purchase(4);
	product2.sale(3);
	product2.display();
	
	return 0;
}
