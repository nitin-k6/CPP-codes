#include<iostream>
using namespace std;

class rectangle{
private:
int length;
int breadth;


public:
rectangle();
rectangle(int l, int b);
rectangle(rectangle &r);
void setLength(int l);
void setBreadth(int b);
int getLength(){return length;}
int getBreadth(){return breadth;}
int area();
int perimeter();
bool isSquare();
~rectangle();
};

class cuboid: public rectangle{

private:
int height;
public:
 cuboid (int h ){
    height=h;
}

int setHeight(int h){
    height=h;
};

int getHeight(){
    return height;
}

int volume(){
    return getLength()*getBreadth()*height;
}

};


int main(){
    
    cuboid c(5);
    c.setLength(10);
    c.setBreadth(15);

    cout<<"Volume is  :"<<c.volume()<<endl;

}

rectangle::rectangle(){
    length=1;
    breadth=1;
}

rectangle::rectangle(int l , int b){
length=l;
breadth=b;
}

rectangle::rectangle(rectangle &r){
length=r.length;
breadth=r.breadth;
}

void rectangle::setLength(int l){
    length=l;
}

void rectangle::setBreadth(int b){
    breadth=b;
}

int rectangle::area(){
    return length*breadth;
}

int rectangle::perimeter(){
    return  2*(length + breadth);
}

bool rectangle::isSquare(){
    return length==breadth;
}
rectangle::~rectangle(){
    
    // cout<<"Rectangle Destroyed";
}