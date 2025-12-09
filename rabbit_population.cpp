#include "rabbit_popolation.h"

int rabbit_pairs(int month) {
    if (month<0){
        cout<<"Invalid Input."<<endl;
        return -1;}
    if (month == 1) return 1;
    if (month == 2) return 1; 
    return rabbit_pairs(month - 1) + rabbit_pairs(month - 2);
}
