#include<stdio.h>
#define SQUARE(x) x*x
int main(){
    int j;
    j=64/SQUARE(4);
    printf("%d\n", j);
}

/*if we use #define SQUARE(x) (x*x) then the output - 4
if we use #define SQUARE(x) x*x then the output - 64

because in 2 second #define SQUARE(x) x*x the parameter hasn't define properly which the compiler not taking */