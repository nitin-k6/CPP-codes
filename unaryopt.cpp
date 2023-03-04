// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance() {}
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    Distance operator -()
    {
        Distance temp;
        temp.feet =  this->feet- 1;
        temp.inch = this->inch - 1;
        return temp;
    }
    void display()
    {
        cout << feet << " " << inch << endl;
    }
    // using friend function
    // friend Distance operator-(Distance a);
};

// Distance operator-(Distance a)
// {
//     Distance temp;
//     temp.feet = a.feet - 1;
//     temp.inch = a.inch - 1;
//     return temp;
// }
int main()
{
    Distance d1(8, 9);
    Distance d2 = -d1;
    d2.display();
    return 0;
}
