#include <iostream>
using namespace std;

int fact(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return fact(x - 1) * x;
    }
}

int main() {
    int n;
    cin >> n;

    if(n < 0){
        cout << "Factorial not defined for negative numbers!" << endl;
    } else {
        cout << "Factorial of " << n << " is: " << fact(n) << endl;
    }

    return 0;
}
