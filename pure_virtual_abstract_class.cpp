#include<iostream>
using namespace std;

class A{
public:
virtual void show()=0;
    void display(){
cout<<"A"<<endl;
    }

};

class B{
public:
void show(){
    cout<<"Pure virtual function of A"<<endl;
}
void display2(){
    cout<<"B"<<endl;
}
};

int main(){
    B b;
     A *ptr;
      b.show();
   b.display2();
   ptr ->display();
}