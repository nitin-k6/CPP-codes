#include<iostream>
using namespace std;

class  Test{
public:
int a;
int b;

public:
static int count;  //When static keyword is used, variable or data members or functions can not be modified again. It is allocated for the lifetime of program.

Test(){

    a=10;
    b=18;
    count++;
    }

};

 int Test::count=0;

int main(){
// Static members can be accessed using both objects and class

Test t1;
Test t2;
cout<<t1.count<<endl;
cout<<t2.count<<endl;
cout<<Test::count<<endl;
cout<<t1.a<<endl;
cout<<t1.b<<endl;

return 0;
}