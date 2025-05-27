#include <iostream>
using namespace std;

int fun(int n) {
    cout << "fun(" << n << ") called" << endl;

    if(n > 100) {
        cout << "fun(" << n << ") returns " << n - 10 << " (Base case)\n";
        return n - 10;
    }

    int inner = fun(n + 11);   // Evaluate inner fun first
    cout << "fun(" << n << ") => fun(" << inner << ") called (Nested)\n";

    int result = fun(inner);   // Outer call
    cout << "fun(" << n << ") returns " << result << endl;
    return result;
}

int main() {
    int r = fun(95);
    cout << "\nFinal Result: " << r << endl;
    return 0;
}