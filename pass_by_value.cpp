#include<iostream>
using namespace std;

void swap(int a , int b){

int temp;
temp =a;
a=b;
b=temp;
cout<<a<<" "<<b<<endl;
}

int main(){
int x =5 , y =8;
swap(x,y);
cout<<x<<" "<<y<<endl;
}