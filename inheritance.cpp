#include<iostream>
using namespace std;

// base class
class rectangle{
    public:
    int length;
};

class B: public rectangle{
    public:
int breadth;
};

int main(){
    B b1;

    b1.breadth=15;
    b1.length=10;
    cout<<"Breadth is : "<<b1.breadth<<endl;
    cout<<"Length is :"<<b1.length<<endl;

    return 0;
}