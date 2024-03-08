#include <stdio.h>

long sumOfNaturalNumbers(long n) {
  // Base case: If n is 1, return 1 (sum of the first 1 natural number)
  if (n == 1) {
    return 1;
  } else {
    // Recursive case: Add n to the sum of the first (n-1) natural numbers
    return n + sumOfNaturalNumbers(n - 1);
  }
}

int main() {
  long num;
  printf("Enter the number of natural numbers to sum: ");
  scanf("%ld", &num);

  // Get the sum of the first num natural numbers
  long sum = sumOfNaturalNumbers(num);

  printf("The sum of the first %ld natural numbers is: %ld\n", num, sum);

  return 0;
}