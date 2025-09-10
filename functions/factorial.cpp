#include<iostream>
using namespace std;

long long factorial(int n) { // Use long long to handle larger factorials
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter the Factorial Number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is = " << factorial(n);
    cout << endl;
    return 0;
}






