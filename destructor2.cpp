#include<iostream>
using namespace std;

class A{
public:

A(){
    cout<<"Constructor is invoked"<<endl;
}


~A(){
    cout<<"Destructor is invoked"<<endl;
}
};

int main(){
    A a1;
    A a2;
    return 0;
}