#include<iostream>
using namespace std;

class Base1{
public:

void display(){
    cout<<"Displaying Base1"<<endl;
}

};

class Base2 {
public:

void display(){
    cout<<"Displaying Base2"<<endl;
}

};

class Derived:public Base1, public Base2{
public:
void display(){
    Base2::display();
}

};

int main(){
    Base1 obj1;
    Base2 obj2;
    Derived obj;
    obj1.display();
    obj2.display();
    obj.display();
    
}