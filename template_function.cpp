#include <iostream>
#include <string>

using namespace std;

template <class A>
class B {
    public:
    void sum(A a, A b) {
        cout << a+b << endl;
    }
};

int main() {
    B<int> a1;
    B<double> a2;
    B<string> a3;
    a1.sum(5, 5);
    a2.sum(3.2, 5.8);
    a3.sum("Hello", " World");
}