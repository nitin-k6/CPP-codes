#include<iostream>
using namespace std;

class Demo{

public:

Demo(){

    cout<<"Constructor is Demo"<<endl;
}

~Demo(){

    cout<<"Destructor is Demo "<<endl;
}
};

void fun()
{
   Demo *p = new Demo();
    // delete p;  // For calling a destructor we have to write this.


 
}

 int main(){

     fun();
 }