#include<iostream>
#include<math.h>

int main(){

    int number; // define the variable
    std::cout << "Enter the Number: ";
    std::cin >> number; // input the variable
    
    int reverse = 0;
    int originalNum = number;

    if(number == 0 ){
        std::cout << "Number is 0 ";
    }
    else {
        // Reverse the digits of the number
        while(number > 0) {
            int last_digit = number % 10; // Get the last digit
            reverse = (reverse * 10) + last_digit; // Update reverse (shift left and add last digit)
            number /= 10; // Remove the last digit
        }
    }

    std::cout << "Reverse of " << originalNum << " is " << reverse << std::endl;
    
    return 0;
}
 