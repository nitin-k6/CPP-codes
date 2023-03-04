#include<iostream>
using namespace std;

class rectangle{

    private:
int length ,breadth;

public:
rectangle(int l1,int b1){
    length=l1;
    breadth=b1;
}

int getLength(){

    return length;
}

int getBreadth(){

    return breadth;
}

int area(){
    return length * breadth;
}
};

int main(){

    // Constructors are called
    rectangle r(10,5);

// Access values assigned by constructor 
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area()<<endl;


}
