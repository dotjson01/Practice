#include<iostream>
using namespace std;


class Rectangle {
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int parimeter() {
        return 2 * (length + breadth);
    }
    
};
int main(){
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;

    cout<<"Area of Reactangle "<<r1.area()<<endl;
    cout<<"Parimeter of Reactangle "<<r1.parimeter()<<endl;
}