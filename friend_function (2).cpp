#include<iostream>
using namespace std;

class A{
private:
int a=5;
int b=16;

friend void show(A obj);
}obj;

void show(A obj){
cout<<obj.a<<endl;
cout<<obj.b<<endl;

}

int main(){
    show(obj);

    return 0;
}