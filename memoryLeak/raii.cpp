#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "Constructor called" << endl; }
    ~MyClass() { cout << "Destructor called" << endl; }
    void doSomething() { cout << "Doing something..." << endl; }
};

void example() {
    unique_ptr<MyClass> myObject(new MyClass()); // Smart pointer
    myObject->doSomething();
    // No need for delete! unique_ptr automatically cleanup karega
}

int main() {
    example();
    cout << "Program finished" << endl;
    return 0;
    //
}