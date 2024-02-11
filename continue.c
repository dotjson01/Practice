#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {  // If the number is even
            continue;;  // Skip the rest of this iteration and move on to the next one
        }
        printf("%d\n", i);  // This line is only reached if the number is odd
    }
    return 0;
}
