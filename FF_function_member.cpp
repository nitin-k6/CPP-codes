#include <iostream>
using namepsace std;

class B;

class A {
    void add() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Addition: " << a+b << endl;
    }
    public:
    friend
}