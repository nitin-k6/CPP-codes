#include<iostream>
using namespace std;

int main(){

    int amount;
    cout<<"Enter amount"<<endl;
    cin>>amount;

    if(amount>=5000){
        cout<<"20% discount";

    }

    else if(amount>=2000 && amount<5000){
          cout<<"10% discount";

    }

    else{
        cout<<"5% discount";
    }
    return 0;
}
