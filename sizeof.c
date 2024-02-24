#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));

    return 0;
}