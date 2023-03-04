#include<iostream>
using namespace std;
// By address or pointers
void swap(int *a, int *b){

int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<a<<" "<<b<<endl;

}

int main(){
    int x=25, y=36;
    swap(&x,&y);
cout<<x<<" "<<y<<endl;

    return 0;

}