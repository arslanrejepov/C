#include "vertext.h"
#include "vertexvector.h"

VertextVector::VertextVector(int num){
    size=num;
    if (size>0)
        ptr= new Vertext[size];
    else
        ptr=NULL;
    
}
VertextVector::~VertextVector(){
    delete [] ptr;
}
VertextVector::VertextVector (const  VertextVector& obj){
    size=obj.size;
    if (size>0){
        ptr= new Vertext[size];
        for (int i=0;i<size;i++)
            ptr[i]=obj.ptr[i];
    }
    else
        ptr=NULL;

    
}
void  VertextVector::inputVector(){
    for (int i=0;i<size;i++){
        double x, y, z;
        cout << "Enter coordinates for Vertex " << i + 1 << ": ";
        cin >> x >> y >> z;
        ptr[i].setPoint(x, y, z);
    }
}
void  VertextVector::printVector(){
    cout<<"Vertex Vector:"<<endl;
    for (int i=0; i<size; i++){
        cout<<"("<<ptr[i].getX()<<", "<<ptr[i].getY()<<", "<<ptr[i].getZ()<<");"<<endl;
    }
}