#include<iostream>
using namespace std;

class A{
public:
int x=36;
int y=64;
};

class B:public A{
public:
int a = x+y;
};

class C : public A{
public:
int m= x*y;

};

int main(){
    B b;
    cout<<b.a<<endl;
    C c;
    cout<<c.m<<endl;

    return 0 ;

}