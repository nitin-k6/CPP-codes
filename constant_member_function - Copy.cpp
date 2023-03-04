#include <iostream>
using namespace std;

class A {
    public:
    // normal member function
    void getvalue() {
        cout << "3" << endl;
    }
    // constant member function
    void getvalue() const {
        cout << "7" << endl;
    }
};

int main() {
    A obj1;
    A const obj2;
    obj1.getvalue();
    obj2.getvalue();
    return 0;
}