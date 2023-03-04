//  code not working 
#include<iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;

int CalculateDistance(int v , int u , int a){

  float distance;
cout<<"Enter three numbers:"<<endl;
cin>>v>>u>>a;

distance= (v*v - u*u) / (2*a);
cout<<"Distance is :"<<distance<<endl;
return 0;
}
