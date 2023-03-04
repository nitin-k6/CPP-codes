#include<iostream>
using namespace std;

int max(int a , int b , int c){
if(a>b && b>c){
    return a;
}
else if(b>a && b>c){
    return b;
}
      else{
          return c;
      }

}

int main(){
 int x=6,y=8,z=9,m;
m=max(x,y,z);
cout<<m<<endl;
    return 0;
}