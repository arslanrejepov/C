#include "vertext.h"

Vertext::Vertext (double x,double y,double z){
    _x=x; _y=y; _z=z;
}
Vertext::~Vertext(){
}
double Vertext::getX() const{ return _x;}
double Vertext::getY() const{ return _y;}
double Vertext::getZ() const{ return _z;}
void Vertext::setPoint(double x,double y,double z){
    _x=x; _y=y; _z=z;
}