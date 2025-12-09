#ifndef VERTEXTVECTOR_H
#define VERTEXTVECTOR_H

#include<iostream>
#include "vertext.h"
using namespace std;


class VertextVector{
    private: 
        int size;
        Vertext *ptr;
    public:
        VertextVector (int num=5); //Constructor
        ~VertextVector(); //Destructor
        VertextVector (const  VertextVector&);	//Copy constructor
        void inputVector();
        void printVector();  
};

#endif