#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    string str;
    fin.open("myfile");
    getline(fin, str);
    cout << str << endl;
}