#include<iostream>
#include<math.h>
using namespace std;

int main(){

 int a,b,c,d;

 cout<<"Enter three numbers"<<endl;
 cin>>a>>b>>c;
  
 d=b*b - 4*a*c;

 if(d==0){

     cout<<"roots are real and equal"<<endl;
     cout<< (-b/(2*a));
 }
   
   else if(d>0){
        
        cout<<"roots are real and unequal"<<endl;
        cout<<(-b +sqrt(b*b - 4*a*c))/(2*a);
        cout<<(-b -sqrt(b*b - 4*a*c))/(2*a);

   }

   else{

        cout<<"roots are imaginary"<<endl;
        cout<<(-b +sqrt(b*b - 4*a*c))/(2*a);
        cout<<(-b -sqrt(b*b - 4*a*c))/(2*a);
       
   }

  return 0;
}