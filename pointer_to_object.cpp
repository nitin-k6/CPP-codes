#include<iostream>
using namespace std;

class rectangle{
 public:
int length;
int breadth;

int area(){
    return length *breadth;
}

int perimeter(){
    return 2*(length +breadth);
}


};

int main(){

   /* for stack
 pointer to object in stack
rectangle r1;       All pointers take 2 bytes.
rectangle*ptr;
ptr=&r1;


ptr ->length=10;
ptr ->breadth=5; 
cout<<"Area is :"<<ptr ->area()<<endl;
cout<<"Perimeter is :"<<ptr ->perimeter()<<endl;


 */

rectangle*ptr= new rectangle(); // dynamic object created in heap.
ptr ->length=10;
ptr ->breadth=5;  // -> is arrow operator or deferencing operator.
cout<<"Area is :"<<ptr ->area()<<endl;
cout<<"Perimeter is :"<<ptr ->perimeter()<<endl;


}