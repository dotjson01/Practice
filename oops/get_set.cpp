#include<iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;

    public:
    // setter value
    void setLength(int l){
        // what if value is negative
        if(l<0){
            length = 1;
            cout<<"Invalid Input Passed"<<endl;
        }
        else{
            length = l;
        }
    }
    void setBreadth(int b){
        // what if value is negative
        if(b<0){
            breadth = 1;
            cout<<"Invalid Input Passed"<<endl;
        }
        else{
            breadth = b;
        }
    }

    // getter value
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2 * (length+breadth);
    }
};
int main(){
    Rectangle r1;
    // r1.setLength(-10);
    // r1.setBreadth(-20);
    r1.setLength(10);
    r1.setBreadth(20);
    cout<<"Area is "<<r1.area()<<endl;

    cout<<r1.getBreadth()<<endl;
    
}