#include<iostream>
using namespace std;

class Vehicle{
public:

Vehicle(){

    cout<<"This is Vehicle "<<endl;
}
};

class Fourwheeler{
public:
 Fourwheeler(){

    cout<<"This is 4 wheeler Vehicle  "<<endl;
}
};

class Car:public Vehicle , public Fourwheeler{

};

int main(){
    
    Car obj;
    return 0;
}