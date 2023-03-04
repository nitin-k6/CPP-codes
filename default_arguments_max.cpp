#include<iostream>
using namespace std;

int max(int x=0, int y=0 , int z=0){

    return x>y && x>z ?x:y>x && y>z?y:z;
}

// ? --> return 
// :otherwise

int main(){
    cout<<max()<<endl;
    cout<<max(6)<<endl;
    cout<<max(4,3)<<endl;
    cout<<max(2,5,7)<<endl;
    cout<<max(45,75,87)<<endl;
}