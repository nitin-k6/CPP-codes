#include <iostream>
using namespace std;

class rectangle
{

private:
    int length;
    int breadth;

    // get - accesors and set- mutators and both combined  we call it as property function.
public:
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
   int area(){
       return length * breadth;
   }


    int getLength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }
};

int main()
{
    rectangle obj;

    obj.setLength(10);
    obj.setBreadth(5);
     cout<<"Area is "<<obj.area()<<endl;
    cout << "Length is " << obj.getLength();
}