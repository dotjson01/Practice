// #include <stdio.h>
// #include <math.h>

// long long power(int base, int exponent) {
//     long long result = 1;
//     for(int i = 0; i < exponent; i++) {
//         result *= base;
//     }
//     return result;
// }

// long long factorial(int n) {
//     long long fact = 1;
//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int a = 2, b = 3, n = 5;
//     printf("%d raised to the power %d is %lld\n", a, b, power(a, b));
//     printf("Factorial of %d is %lld\n", n, factorial(n));
//     return 0;
// }


// Time Complexity:
// The power function has a time complexity of O(b), where b is the exponent. This is because there is a loop that runs b times.
// The factorial function has a time complexity of O(n), where n is the input to the function. This is because there is a loop that runs n times.
// Therefore, the overall time complexity of the program is O(b + n).

// Space Complexity:
// Both the power and factorial functions have a space complexity of O(1),
//  meaning they use a constant amount of space. This is because the amount 
//  of memory they use does not change with the size of the input; they each use a 
//  few integer variables and that's it.


#include <stdio.h>
#include <math.h>

// Function to calculate a^b

void power_fact(int , float );
int factorial(int);


int main(){
    int a;
    float b;
    printf("Enter the number and its power: ");
    scanf("%d %f", &a, &b);
    power_fact(a, b); //calling the power function

     int num, result2;
    printf("Enter any number: ");
    scanf("%d", &num); // combine printf and scanf

    result2 = factorial(num); // use separate variable for result
    printf("The factorial of the number is: %d", result2);
    factorial(a); //calling the factorial function
    return 0;
}

void power_fact(int a, float b){
    float result = pow(a, b);
    printf("The result is %f\n", result);
    return;
}

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact *= i; // use shorthand for multiplication assignment
    }
    return fact;
}