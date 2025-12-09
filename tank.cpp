#include "tank.h"

Tank::Tank()
{ gallons = 50; }

Tank::Tank(int gal)
{ gallons = gal; }

Tank::Tank(const Tank &obj){
	gallons=obj.gallons;
	cout<<"The Tank is copied."<<endl;
}

int Tank::getGallons()
{ return gallons; }

Tank:: ~Tank(){
	cout<<"The tank of "<<gallons<<" gallons destroyed."<<endl;
}

