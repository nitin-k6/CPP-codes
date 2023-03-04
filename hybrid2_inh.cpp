#include<iostream>
using namespace std;

class A{
public:

int x=45;
int y=64;

};

class B: virtual public A {
public:
int z=x+y;
int p=6;

};

class C: public A{
    public:
    int m=x*y;
    int q=12;
};


class D:public B, public C{
    public:
    int d=p+q;
};

int main(){

    C c;
    cout<<c.m<<endl;
    B b;
    cout<<b.p<<endl;
    D d1;
    cout<<d1.d<<endl;

    return 0;
}

