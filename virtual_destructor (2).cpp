#include <iostream>
using namespace std;

class A {
    public:
    A() {
        cout << "A C" << endl;
    }
    virtual ~A() {
        cout << "A D" << endl;
    }
};

class B: public A {
    public:
    B() {
        cout << "B C" << endl;
    }
    ~B() {
        cout << "B D" << endl;
    }
};

int main() {
    B *ptr2 = new B;
    A *ptr1 = ptr2;
    delete ptr1;
}