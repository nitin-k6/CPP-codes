#include <iostream>
#include <string>

using namespace std;

template <class A> A sum(A a, A b) {
    return a+b;
}

int main() {
    cout << sum<int>(5, 5) << endl; 
    cout << sum<double>(3.2, 5.8) << endl;
    cout << sum<string>("Hello", " World") << endl;
}