#include<iostream>
using namespace std;

class  Test{
public:
int a;
int b;

public:
static int count;

 Test(){

     a=10;
     b=18;
     count++;
     }
     

  static int getcount(){
    //   a++;  
     return count;  
  }
};  

 int Test::count=0;

int main(){

   cout<<Test::getcount()<<endl;   
   Test t1;
   cout<<t1.getcount();                                              

return 0;
}