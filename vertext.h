#ifndef VERTEXT_H
#define VERTEXT_H

#include<iostream>
using namespace std;

class Vertext{
    private:
        double _x,_y,_z;
    public:
        Vertext (double=0,double=0,double=0);
        ~Vertext ();
        double getX() const;
        double getY() const;
        double getZ() const;    
        void setPoint(double,double,double);        
};

#endif