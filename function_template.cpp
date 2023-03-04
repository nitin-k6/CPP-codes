#include<iostream>
using namespace std;
template<class T>

/*
int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

float max(float a, float b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
  --> ex: a>b?a:b;    this statement means if a>b return 'a' otherwise return 'b'. // turnary operator or conditional operator
*/

T maxim(T a , T b){

return a>b?a:b;

}


int main(){

    
    cout<<maxim(8,6)<<endl;
    cout<<maxim(6.7f , 8.4f) <<endl;

return 0;
}