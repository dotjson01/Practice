// 1.
#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10 + sumOfDigits(num / 10));
}

int main() {
    int num;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}
// the time complexity of this program is O(n)
// the space complexity of this program is O(1)


// 2. 
#include <stdio.h>

int sum_digits(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n % 10 + sum_digits(n / 10);
  }
}

int main() {
  int n;
  printf("Enter a 5-digit number: ");
  scanf("%d", &n);

  int sum = sum_digits(n);

  printf("The sum of the digits of the number is %d\n", sum);

  return 0;
}

// The time complexity of the program is O(n), where n is the number of digits in the input number. This is because the function sum_digits() recursively calls itself on the input number divided by 10, until the input number is 0. The number of times the function calls itself is equal to the number of digits in the input number.

// The space complexity of the program is O(1), because the function sum_digits() does not use any additional space beyond the input number.
