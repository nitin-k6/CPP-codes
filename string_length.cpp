#include<iostream>
using namespace std;

int main(){

    int count=0;
    string str= "NITIN" ;
   
   for (int i=0 ; str[i]!='\0' ; i++){

       count ++;
   }
   cout<<"Length of the string is : "<<count<<endl;
   return 0;
} 