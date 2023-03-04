#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
 cout<<" I am Base"<<endl;


    }
};

class Derived:public Base{


};

class Derived2: public Base{


};

int main(){
    Derived d1;
    Derived2 d2;
    
    return 0;
}
