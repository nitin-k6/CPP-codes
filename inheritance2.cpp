#include<iostream>
using namespace std;

class base{
public:
int a;
void display(){

    cout<<"Display of Base"<<endl;
}
};

class Derived : public base{
public:
void show(){

    cout<<"Show of derived "<<endl;
}
};

int main(){

 Derived d;
 d.display();
 d.show();
 d.a=100;
 cout<<d.a;
}