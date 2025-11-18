#include<iostream>
using namespace std;

class Car{
    int year, speed;
    string make;
public:
    Car(int y, string m){   // constructor to initialize the objects year, make and speed
        year = y;
        make = m;
        speed = 0;
    }
    void accelarate(){     // this function will increase the speed by 5
        speed += 5;
    }
    void brake(){           // this function will decrease the speed by 5
        speed>=5? speed-=5 :speed=0;
    }   
    string getMake(){       // this function will return string value of object make
        return make;
    }
    int getYear(){
        return year;        // this function will return integer value of object year
    }
    int getSpeed(){         // this function will return integer value of object speed
        return speed;   
    }
    ~Car(){                 // destructor to set speed to 0
        speed = 0;
    }

};

int main(){
    Car c1(2010, "Ford"); // object of class Car defined with year 2010 and make Ford
    cout<<"My car is made in "<<c1.getYear()
        <<". The Maker is "<<c1.getMake()
        <<". The speed is "<<c1.getSpeed()<<"."<<endl;
    cout <<"Accelerating..."<<endl;
    for (int i = 0; i < 5; i++){       // loop to increase the speed by 5
        c1.accelarate();
        cout<<"The Speed is: "<<c1.getSpeed()<<endl;
    }
    cout<<endl<<"Braking..."<<endl;    // loop to decrease the speed by 5
    for (int i = 0; i < 5; i++){
        c1.brake();
        cout<<"The Speed is: "<<c1.getSpeed()<<endl;
    }
        
    return 0;
}