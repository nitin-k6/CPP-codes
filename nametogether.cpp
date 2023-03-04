#include<iostream>
#include <string>

using namespace std;

int main(){

    string str;
  cout<<"What's your name:";

  getline(cin,str);  // getline is used in cpp to combine two names
  cout<<"Name:"<<str<<endl;

  return 0;
}