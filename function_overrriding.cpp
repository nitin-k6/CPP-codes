#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"I am Nitin"<<endl;
    }
};

class Derived:public Base{
public:

void display(){
    cout<<"Wah kya sceen ha"<<endl;
}
};

int main(){
Derived d;
d.display();

return 0;
}
