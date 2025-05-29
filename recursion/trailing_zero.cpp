#include <iostream>
using namespace std;

// Function to count the number of trailing zeroes in n!
int countTrailingZeroes(int n) {
    int count = 0;

    // Keep dividing n by 5, 25, 125, ... and add the result to count
    while (n >= 5) {
        n = n / 5;
        count = count + n;
    }

    return count;
}

int main() {
    int n;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Call the function and show the result
    int result = countTrailingZeroes(n);
    cout << "Number of trailing zeroes in " << n << "! is: " << result << endl;

    return 0;
}
