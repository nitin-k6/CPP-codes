#include<iostream>
using namespace std;

class Base{
public:

int x=25;

};

class Derived: public Base{
public:
int y =10;

};
 class Derived2 : public Derived{
public:
 int z=x+y;


 };

 int main(){
     Derived2 obj;
     cout<<obj.z;

     return 0;
 }