#include<iostream>
using namespace std;

class Innova{

public:
static int price;
static int getPrice(){

return price;
}
};

int Innova::price=20;


int main(){
    Innova i1;
    Innova i2;
    Innova i3;
    cout<<i1.price<<endl;
    cout<<i2.price<<endl;
    cout<<i3.price<<endl;
   return 0;
}