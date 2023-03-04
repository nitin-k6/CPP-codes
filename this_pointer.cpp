#include<iostream>
using namespace std;

class rectangle{
private:
int length;
int breadth;

public:

  rectangle(int length, int breadth){

    this-> length=length;
    this-> breadth=breadth;
}
    int area(){
        return length*breadth;
    }

    int getLength(){
        return length;
    }

 int getBreadth(){
        return breadth;
    }    

    int perimeter(){

      return 2*(length+breadth);

    }
};

int main(){

   rectangle r1(10,5);
   cout<<"Area is:"<<r1.area()<<endl;
   cout<<"Perimeter is :"<<r1.perimeter()<<endl;
}







