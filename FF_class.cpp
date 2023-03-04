#include <iostream>
using namespace std;

class A {
    int a=9;
    int b=10;
    public:
    friend class B;
};

class B {
    public:
    void display(A obj) {
        cout << obj.a+obj.b << endl;
    }
};

int main() {
    A obj1;
    B obj2;
    obj2.display(obj1);
}