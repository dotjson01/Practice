// access function via using pointer under heap memory
#include<iostream>
using namespace std;

class Rectangle {
    public:

    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2 * (length+breadth);
    }

};

int main(){
    // Rectangle r1; // object created in stack memory
    // Rectangle *ptr;
    // ptr = &r1;

    Rectangle *ptr = new Rectangle; // object created in heap memory

    ptr -> length = 10;
    ptr -> breadth = 20;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    delete ptr;
}