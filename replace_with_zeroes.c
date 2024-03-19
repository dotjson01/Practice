// #include <stdio.h>

// int replace_zero(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         int digit = n % 10;
//         if (digit == 0) {
//             digit = 1;
//         }
//         return replace_zero(n / 10) * 10 + digit;
//     }
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int result = replace_zero(number);

//     printf("The number after replacing 0 with 1 is: %d\n", result);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Convert the number to a string
    char str[50];
    sprintf(str, "%d", number);

    // Replace all '0's with '1's
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }

    // Convert the string back to an integer
    sscanf(str, "%d", &number);

    printf("The number after replacing 0 with 1 is: %d\n", number);

    return 0;
}