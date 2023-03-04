#include<iostream>
using namespace std;


float add(float x , float y){
    float z;
    z= x+y;
    return z;
}

int main(){

    float x=5.6 , y=6.9 , z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
}
