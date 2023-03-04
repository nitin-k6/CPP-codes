#include<iostream>
using namespace std;

class Base{
public:
void display(){
    cout<<"Display of Base"<<endl;
}

};

class Derived:public Base{
public:void display()
{
    cout<<"Display of Derived:"<<endl;
    }

};

int main(){

    Derived d1;
    Derived*ptr=&d1; // Base*ptr=&d1;
    ptr->display();
    return 0;
}
