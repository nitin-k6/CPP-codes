#include<iostream>
using namespace std;

void swap(int *a , int *b){

int temp;
temp=*a;
*a=*b;
*b=temp;

}
int main(){
    int x = 3 , y = 6;
    // Berfore swap
    cout<<x<<endl;
   cout<<y<<endl;
     swap(&x, &y);

    // After swap
   cout<<x<<endl;
   cout<<y<<endl;
}