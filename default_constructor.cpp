#include<iostream>
using namespace std;

class rectangle{

public:
int a , b;

// default constructor
rectangle(){
    a=10;
    b=5; 
}
};

int main(){


    rectangle c;
    cout<<c.a<<endl;
    cout<<c.b<<endl;
}