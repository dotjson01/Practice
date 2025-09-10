#include <iostream>
#include <cmath> // For log10
using namespace std;

class Solution {
public:
    int digitsInFactorial(int n) {
        if (n == 0 || n == 1) return 1;

        double digits = 0;
        for (int i = 2; i <= n; i++) {
            digits += log10(i); // Using logarithm to count digits
        }
        return static_cast<int>(digits) + 1; // +1 for the final digit
    }
};

int main() {
    Solution sol;
    int n = 5; // Example input
    cout << "Number of digits in " << n << "! is: " << sol.digitsInFactorial(n) << endl;
    return 0;
}


