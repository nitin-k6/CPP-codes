#include<iostream>
using namespace std;


class Test{

public:
int a;
private:
int b;
protected:
int c;
  friend  void fun();

};

void fun(){

     Test t;
     t.a=10;
     t.b=15;
     t.c=36;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c<<endl;
}

int main(){
   fun();
    
    return 0;
}