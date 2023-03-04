#include<iostream>
using namespace std;



class Base{
public:
 virtual void display(){
    cout<<"Display of Base"<<endl;
}

};

class Derived:public Base{
public:
void display()
{
    cout<<"Display of Derived:"<<endl;
    }

};

int main(){
    Derived d1;
    
    Base*ptr=&d1;
     ptr -> display();
    // Or we can use below one 
      /*d1.display();*/
     return 0;
}