#include<iostream>
using namespace std;


int main(){

    int A[6]={2,4,6,9,7,8};
    // cout<<A[3];


 int i;
 for (i=0; i<7; i++){     
   cout<<A[i];
    cout<<endl;
     } 

    //  It's known as "for each loop"
    
 /* for(int x:A){    // Drawback of this is we have to specify no of elements in an array whoich we are declaring
    cout<<x<<endl;        // otherwise it will throw error
   }*/                    // endl will print values in different lines and " " will print in same line

   /*  for(auto x:A){      by adding auto we can have different data types in an array
    cout<<x<<endl;        
   }*/



 /*  for(int x:A){      by adding incrementation it will show incremented values
    cout<<++x<<endl;        
   }*/

    return 0;
}