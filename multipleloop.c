#include <stdio.h>

int main() {
    for (int i = 0, j = 0; j <= 10 && i <= 15; j++, i = i + 2) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}