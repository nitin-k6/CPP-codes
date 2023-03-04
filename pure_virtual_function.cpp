#include <iostream>
using namespace std;

class Dimensions {
    public:
    double Dim;
    double getDimensions() {
        cout << "Enter Dimensions: ";
        cin >> Dim;
        return Dim;
    }
    virtual double Area() = 0;
};

class Circle: public Dimensions {
    public:
    double Area() {
        return 3.14*Dim*Dim;
    }
};

int main() {
    Circle obj;
    obj.getDimensions();
    cout << "Area of circle is: " << obj.Area() << endl;
}