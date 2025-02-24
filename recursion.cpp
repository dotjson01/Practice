#include <iostream>

int main() {
    int a = 3, b = 1, c = 2;
    b = b ^ a ^ (c * 2);  // Added parentheses for clarity
    
    if (b && c) {
        b = 1;
        if (a) {
            a = (a * a) % 5;  // Added parentheses for clarity
        }
        c = 0;
    }
    
    std::cout << "Result: " << a + b + c << std::endl;  // Added label and endl
    return 0;  // Added return statement 
}
