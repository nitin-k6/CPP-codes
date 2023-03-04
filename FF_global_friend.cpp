#include <iostream>
using namespace std;

class A {
    void add() {
        int a,b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << a+b << endl;
    }
    public:
    friend void show(A obj);
};

void show(A obj) {
    obj.add();
}

int main() {
    A obj1;
    show(obj1);
}