#include<iostream>
using namespace std;

int main(){

int a=56;
int *p;
p=&a;

cout<<a<<endl;
cout<<p<<endl;  // it will store address
cout<<&a<<endl;

// deferencing operator
cout<<*p<<endl;  // for value


// pointer to pointer 

int **c=&p;

cout<<"the  address of p is:"<<c<<endl; 
cout<<"the  address of p is:"<<&p<<endl; 
cout<<"The valuef c is :"<<**c<<endl;


return 0;
}