#include<iostream>
using namespace std;


class A{
public:

int count=0;
A(){
    count++;
         cout<<count;
         cout<<"Object created"<<endl;
}

~A(){
    cout<<"Object Deleted"<<endl;
    count--;

}
};

int main(){
    A a1,a2,a3;

}