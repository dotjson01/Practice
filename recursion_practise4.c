// #include<stdio.h>

// void binaryequivalent(int n);

// void binaryequivalent(int n){
//     if(n != 0){
//         binaryequivalent(n/2);
//         printf("%d",n%2);
//     }
//     else {
//         printf("You printed 0");
//     }
// }

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     binaryequivalent(n);
//     printf("\n");
//     return 0;
// }


#include <stdio.h>

void printBinary(int num) {
    int binary[32];
    int i = 0;

    // while num is not zero
    while (num > 0) {
        // store the remainder in binary[]
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // print binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    printBinary(num);
    return 0;
}