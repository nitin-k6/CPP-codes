#include<iostream>
using namespace std;

int main(){
int i;
int A[10];
int pcount=0;
int ncount=0;

cout<<"Enter numbers:"<<" ";

for(i=0; i<10; i++){
    cin>>A[i];
}


for(i=0; i<10; i++){

    if(A[i]>0)
        pcount++;
    
    else{
        ncount++;
    }

}

cout<<pcount<<endl;
cout<<ncount<<endl;

return 0;
}

