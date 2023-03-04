#include<iostream>
using namespace std;

class Base{
public:

Base(){
    cout<<"Ant"<<endl;
}

};

class Derived : public Base{
public:

Derived(){
    cout<<"Boy"<<endl;
}

};

class Derived2: public Derived{
public:
Derived2(){
    cout<<"Cat"<<endl;
}
};

int main(){
    Derived2 obj;
}