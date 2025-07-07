#include<iostream>
using namespace std;

int main() {
    int N = 5;
    // Outer loop for rows
    for (int i = 1; i <= N; i++) { // 'i' is born here. It lives inside this big loop.

        // ---- The "Space Room" ----
        { // A new scope begins
            // A variable named 'j' is born here.
            for (int j = 1; j <= N - i; j++) {
                cout << " ";
            }
            // The 'j' from the space loop dies here. Its memory is wiped clean.
            // It no longer exists.
        } // The scope ends

        // ---- The "Star Room" ----
        { // A completely new scope begins
            // A brand new, totally separate variable, which also happens
            // to be named 'j', is born here.
            for (int j = 1; j <= (2 * i) - 1; j++) {
                cout << "*";
            }
            // The 'j' from the star loop dies here. Its memory is wiped.
        } // The scope ends

        cout << endl;
    } // The variable 'i' dies here when the outer loop finishes.
}