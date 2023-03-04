#include<iostream>
using namespace std;

class Vehicle{
public:
Vehicle(){
    cout<<"This is Vehicle "<<endl;
}
    
};

class Fourwheeler:public Vehicle {
public:
Fourwheeler(){
    cout<<"Objects with 4 wheels are Vehicles "<<endl;
}

};

class Car:public Fourwheeler{
public:
Car(){
cout<<"This is fucking car "<<endl;
}

};

int main(){
Car obj;

return 0;
}