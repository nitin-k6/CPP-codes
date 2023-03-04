#include<iostream>
using namespace std;

int main(){

    int m1 , m2 ,m3;
    float Avg;

    cout<<"Enter marks"<<endl;
    cin>>m1>>m2>>m3;
    Avg= (m1+m2+m3)/3;

    if(Avg>=60){

        cout<<"A"<<endl;
    }

    else if(Avg >=35 && Avg<60){

        cout<<"B"<<endl;
     }


    else {
        cout<<"C"<<endl;
    }

    return 0;
}