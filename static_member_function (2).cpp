#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class A {
    public:
    static int roll_no;
    string str;
    long long int phone_no;
    void setData() {
        cout << "Enter name: ";
        getline(cin, str);
        cout << "Enter phone number: ";
        cin >> phone_no;
    }
    void getData() {
        cout << "Roll Number: " << ++roll_no << endl;
        cout << "Name: " << str << endl;
        cout << "Phone number: " << phone_no << endl;
    }
};

int A::roll_no;

int main() {
    A a1, a2, a3;
    a1.setData();
    cout << endl << "Data entered is:" << endl;
    a1.getData();
}