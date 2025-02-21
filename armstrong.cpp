#include <iostream>
#include <cmath>  // For using the power function
using namespace std;

// Function to check if a number is Armstrong
bool isArmstrong(int n) {
    int originalNumber = n;  // Store the original number for comparison later
    int sum = 0;             // This will hold the sum of the digits raised to the power

    // Step 1: Count the number of digits in the number
    int digitCount = 0;
    while (n > 0) {
        n = n / 10;    // Remove the last digit by dividing by 10
        digitCount++;   // Increase the count of digits
    }

    // Step 2: Reset n to the original number
    n = originalNumber;

    // Step 3: Sum up each digit raised to the power of the total number of digits
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        sum += pow(digit, digitCount);  // Add the digit raised to the power of digitCount
        n = n / 10;    // Remove the last digit
    }

    // Step 4: Check if the sum is equal to the original number
    return sum == originalNumber;  // If true, it's an Armstrong number
}

int main() {
    int num;
    cout << "Enter a number: ";   // Prompt user to enter a number
    cin >> num;                   // Take input

    // Step 5: Call the isArmstrong function and display the result
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;  // If Armstrong number
    } else {
        cout << num << " is not an Armstrong number." << endl;  // If not Armstrong number
    }

    return 0;   // End the program
}
