#include<iostream>
using namespace std;

class Vehicle{
public:
Vehicle(){
    cout<<"This is Vehicle "<<endl;
}
};

 class Fourwheel:public Vehicle{

 };

 class Car:public Vehicle{


 };
int main(){
Fourwheel obj1;
Car obj2;

return 0;
}