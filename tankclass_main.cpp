#include "tank.h"

int main(){ 	
	Tank storage1, storage3(20);
	Tank storage2= storage3;
	cout << storage1.getGallons() << endl;
	cout << storage2.getGallons() << endl;
	cout << storage3.getGallons() << endl;
	return 0;
}


