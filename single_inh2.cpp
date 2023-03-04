#include<iostream>
using namespace std;

class Base{
public:
int x=10;

};

class Derived:public Base{
public:

int y=5;
 // int z = x+y; 

};

int main(){
 Derived d;
//  cout<<d.z;
cout<<d.x<<endl;
cout<<d.y<<endl;
return 0;
}