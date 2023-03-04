#include<iostream>
using namespace std;

int main(){

int v,u,a, distance;
cout<<"Enter three numbers:"<<endl;
cin>>v>>u>>a;

distance= (v*v - u*u) / (2*a);
cout<<"Distance is :"<<distance<<endl;
return 0;
}
