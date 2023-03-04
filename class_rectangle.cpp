#include<iostream>
using namespace std;
// class is private by default.
class rectangle
{
public:
     // Only data members will occupy memory, functions will not.
   int length;
   int breadth;

   int area(){
       return length * breadth;
   }
   int perimeter(){
       return 2*(length + breadth);

   }
   
};
// The . (dot) operator is used to access class, structure
int main(){
    rectangle r1 , r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area is:"<<r1.area()<<endl;
    cout<<"Perimeter is :"<<r1.perimeter()<<endl;

    r2.length=15;
    r2.breadth=10;
    cout<<"Area is:"<<r2.area()<<endl;
    cout<<"Perimter is :"<<r2.perimeter()<<endl;


    return 0;
}
