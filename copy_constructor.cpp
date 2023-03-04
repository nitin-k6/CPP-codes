#include<iostream>
using namespace std;

class rectangle{

private:
int length, breadth;

public:

rectangle(int l , int b){

  length=l;
  breadth=b;
}

rectangle(rectangle &addr){


 // copy constructor with a rectangle object as parameter
    length=addr.length;
    breadth=addr.breadth;
}

 int area(){
    return length*breadth;
}
};

int main(){

// Creates an object r1 of class rectangle
rectangle r1(10 , 5);

//copy content of r1 to r2
rectangle r2= r1;  // can also write it as 

cout<<"Area of rectangle 1 is:\n"<< r1.area()<<endl;
cout<<"Area of rectangle 2 is:\n"<< r2.area()<<endl;

}