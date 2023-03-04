#include<iostream>
using namespace std;

int main(){

int A[]={1,3,64,32,52,63,73,61};
int i, n=8;
int l=0;
int h=7;
int key , mid;
cout<<"Enter number"<<endl;
cin>>key;

while(l<=h){
   
   mid=(l+h)/2;
   if(key==A[mid]){
       cout<<"Found at"<<mid;
       return 0;
   }

    else if(key<A[mid]){
         h=mid-1;
    }
     else{
         l=mid+1;
     }
}
  cout<<"Not found";
    return 0;
}

