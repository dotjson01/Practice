#include <iostream>
using namespace std;

int *getNumber() {
    static int num = 42;  // Static memory mein store hoga
    return &num;          // num ka address return ho raha hai
}

int main() {
    int *ptr = getNumber();  // ptr mein num ka address store ho raha hai
    cout << "Value: " << *ptr << endl;  // Pointer dereference kar ke value print karenge
    return 0;
}
