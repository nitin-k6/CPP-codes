#include<iostream>
using namespace std;


class A{
    public:
    A(){
        cout<<"Cat"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"Dog"<<endl;
    }
};

class C:public A, public B{



};

class D:public A{

};

int main(){
    C c;
    D d;

    return 0;
}