#include<iostream>
using namespace std;
class A;

class B{
public:
 void show(int n);

};

class A{
 int data ;
 friend void B::show(int n);

};
void B::show (int n){

}
int main(){
A a1;
B b1;
b1.show(2);

}