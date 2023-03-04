#include <iostream>
using namespace std;

int main()
{

    cout << "Menu";
    cout << "1.Add\n"
         << "2.Sub\n"
         << "3.Multiply\n"
         << "4.Divide\n";

    int option;
    cout << "Enter your option"<<endl;
    cin >> option;
    int a, b, c;
    cout<<"Enter two number"<<endl;
    cin >> a >> b;

    switch (option)
    {

    case 1:
    
        c = a + b;
        break;
    
    case 2:
    
        c = a - b;
        break;
    
    case 3:
    
        c = a * b;
        break;
    
    case 4:
    
        c = a / b;
        break;
    
    }
        cout << "Result is " << c << endl;

        return 0;
     
}