#include<iostream>
using namespace std;

class Test{

private:
int a= 25;
public:

friend void display(Test t);
};

void display(Test t){
cout<<t.a;

}

int main(){
 Test t;
  display(t);
  return 0;
}