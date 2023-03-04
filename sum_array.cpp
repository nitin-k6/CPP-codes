#include<iostream>
using namespace std;


int main(){

    int A[10] ={3, 7, 4, 8, 6, 9, 1, 5 , 2 ,6};
    int i;
    int sum=0;

    for(i=0; i<11; i++){
        sum=sum+A[i];
        cout<<sum<<" "; // cout to be written inside  if we want sum of adjacent numbers one by one
    }
        cout<<sum<<" ";  // cout written outside loop function if we directly want the sum of all numbers

        return 0;

}