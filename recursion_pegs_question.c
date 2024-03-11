// #include <stdio.h>

// void hanoi(int n, char source, char target, char auxiliary) {
//     if (n > 0) {
//         // Move n - 1 disks from source to auxiliary, so they are out of the way
//         hanoi(n - 1, source, auxiliary, target);

//         // Move the nth disk from source to target
//         printf("Move disk %d from peg %c to peg %c\n", n, source, target);

//         // Move the n - 1 disks that we left on auxiliary to target
//         hanoi(n - 1, auxiliary, target, source);
//     }
// }

// int main() {
//     // initiate call from source A to target C with auxiliary B
//     hanoi(4, 'A', 'C', 'B');
//     return 0;
// }


#include <stdio.h>

void hanoi(int n, char source, char target, char auxiliary) {
    if (n > 0) {
        // Move n - 1 disks from source to auxiliary, so they are out of the way
        hanoi(n - 1, source, auxiliary, target);

        // Move the nth disk from source to target
        printf("Move disk %d from peg %c to peg %c\n", n, source, target);

        // Move the n - 1 disks that we left on auxiliary to target
        hanoi(n - 1, auxiliary, target, source);
    }
}

int main() {

    hanoi(4, 'A', 'C', 'B');
    return 0;
}


// recursion_pegs_answer.c
//