#include <iostream>
using namespace std;

int globalVar = 10; // Global variable: Static storage duration

class MyClass {
public:
    static int staticVar; // Static data member: Static storage duration
};
int MyClass::staticVar = 20; // Static member ko initialize karna

void myFunction() {
    static int localVar = 30; // Static local variable: Static storage duration
    cout << "Local static var: " << localVar << endl;
    localVar++;
}

int main() {
    cout << "Global var: " << globalVar << endl; // Output: 10
    cout << "Static class var: " << MyClass::staticVar << endl; // Output: 20
    myFunction(); // Output: 30
    myFunction(); // Output: 31 (localVar retains value between calls)
    return 0;
}