#include <iostream>
using namespace std;

class A {
    public:
    virtual void show() {
        cout << "show of class A" << endl;
    }
};

class B: public A {
    public:
    void show() {
        cout << "show of class B" << endl;
    }
};

int main() {
    A obj1, *ptr1;
    B obj2, *ptr2;
    ptr1 = &obj2;
    ptr1->show();
}