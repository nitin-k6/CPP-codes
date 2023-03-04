#include<iostream>
using namespace std;

int main(){

int A[10];
int i; int n=10 , key;

cout<<"Enter the numbers :"<<endl;

for(i=0;i<n;i++){
    cin>>A[i];
}

cout<<"Enter the key"<<endl;
cin>>key;

for(i=0;i<n;i++){
    if(key==A[i]){
        cout<<"Key found at "<<i<<endl;
     return 0;

    }
}
cout<<"Not found";

}