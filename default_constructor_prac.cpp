#include<iostream>
using namespace std;

class rectangle{
public:

int a,b;

    rectangle(){
   a=25;
   b=69;
   
    }
};
int main(){

    rectangle r;

   cout<<r.a<<endl;
   cout<<r.b<<endl;

    return 0;
}