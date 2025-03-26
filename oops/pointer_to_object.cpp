// access function via using pointer 
#include<iostream>
using namespace std;

class Rectangle { // declared class
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
    Rectangle r1; // object created
    Rectangle *ptr;
    ptr = &r1;
    ptr -> length = 10;
    ptr -> breadth = 20;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

}