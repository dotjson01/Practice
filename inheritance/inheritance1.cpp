#include <iostream>
using namespace std;

class Base{
    public:
    int a; //data member
    void display() //function decalared
    {
        cout<<"Display Base Class"<<endl;
        cout<<"Value of a is "<<a<<endl;
    }
};

class Derived:public Base{
    public:
    void show(){
        cout<<"Display Derived Class"<<endl;
        cout<<"Value of a is "<<a<<endl;
    }
};
int main(){
    Base b;
    b.a=10; // declared in main --> initialized in base --> accessed in derived 
    b.display(); // calling base class function
    Derived d; // creating object of derived class
    d.a=20; // declared in main --> initialized in derived --> accessed in derived
    d.show(); // calling derived class function
    d.display(); // calling base class function from derived class object 
}
