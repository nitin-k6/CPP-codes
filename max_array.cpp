#include<iostream>
using namespace std;

int main(){

     int A[]={1,3,5,4,8,7,9,2,6};
     int i, max;
     max= A[0];
    for(i=0; i<10;i++){
      if (A[i]>max){
          max=A[i];
      }
    }
    cout<<max<<endl;
    return 0;
}