#include "vertext.h"
#include "vertexvector.h"

int main() {
    VertextVector vv(2);
    vv.inputVector();
    vv.printVector();
    Vertext v1(1,2,3);
    cout<<"v1.Vector:";
    cout<< "(" <<v1.getX() << ", " << v1.getY() << ", " << v1.getZ() << ")";
    cout << endl;

    return 0;
}