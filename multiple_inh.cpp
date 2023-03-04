#include<iostream>
using namespace std;

class Base{
    public:
    Base(){

        cout<<"Displaying Base"<<endl;
    }
};

class Derived:  public Base{
public:
Derived(){
    cout<<"Display of Derived"<<endl;
}

};

class Nitin: public Derived, public Base{
  
    
};

int main(){

    Nitin obj;
    return 0;
}

