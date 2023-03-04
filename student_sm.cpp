#include<iostream>
using namespace std;

class Student{

int roll;
string name;
string int addNo;

Student (string n){
    addNo++;
    roll=addNo;
    name=n;
}

void display(){

cout<<"Name"<<name<<endl<<"Roll"<<roll<<endl;
}
};
int Student::addNo=0;

int main(){
     Student s1("Nitin");
     Student s2("John");
     Student s3("Conor");

        s1.display();
        s2.display();
        s3.display();
        cout<<"Admission Number: "<<Student::addNo<<endl;
}













