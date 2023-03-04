#include <bits/stdc++.h>
using namespace std;
class A
{
    int odd;

public:
    A(int i)
    {
        odd = i;
    }


    void display() 
    {
        cout << odd << endl;
    }

     void *operator new(size_t size){
         void * p= malloc(size);
         return p;
     }
     void operator delete(void *p){
         cout<<"Delete"<<endl;
         free(p);
     }

    // Using friend function
    // friend void *operator new(size_t size);
};

// void *operator new(size_t size)
// {
//     void *p = malloc(size);
//     return p;
// }
// void operator delete(void* p)

int main()
{
    A *a = new A(23);
    a->display();
    delete a;
}