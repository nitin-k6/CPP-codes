#include<iostream>
using namespace std;

int main(){

int x=5;
// y is not another variable ,it's the another name of x        
int &y =x;

y++;
cout<<x<<endl;
cout<<y<<endl;

cout<<&x<<endl;
cout<<&y<<endl;
return 0;

}