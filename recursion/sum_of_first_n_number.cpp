#include<iostream>
using namespace std;

int sum(int x){
    // Base Case
    if(x == 0){
        return 0;  // Sum of first 0 numbers is 0
    }
    if(x < 0){
        cout << "Invalid input (negative number)" << endl;
        return 0;  // Return 0 for invalid input
    }

    // Recursive Case
    return sum(x - 1) + x;  // Sum of first x numbers = sum of first (x-1) numbers + x
}

int main(){
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    int result = sum(n);
    cout << "Sum is: " << result << endl;
    return 0;
}