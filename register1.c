// #include <stdio.h>

// int main() {
//     int sum = 0;  // Regular variable (not in register)

//     // Loop to calculate the sum of 100 numbers
//     for (int i = 1; i <= 100; i++) {
//         register int num = i;  // Variable suggested to be stored in register
//         sum += num;
//     }

//     printf("Sum of 100 numbers: %d\n", sum);

//     return 0;
// }

/*More Optimise Solution using formula */

#include <stdio.h>

int main() {
    unsigned char n = 100; // Number of elements to sum

    // Formula for sum of first n natural numbers
    unsigned int sum = n * (n + 1) / 2;

    printf("Sum of first %u numbers: %u\n", n, sum);

    return 0;
}
