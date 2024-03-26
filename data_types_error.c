#include<stdio.h>

int main(){
    long sum =2;
    printf("Sum is %ld\n", sum);
    return 0;
}

/*
In C, int and long are different data types and can have different sizes depending on the system and compiler.
 On some systems, int is 4 bytes and long is 8 bytes. On other systems, both int and long might be 4 bytes.
*/

/*
When you use %d to print a long integer, it might work correctly on some systems (those where int and long have the same size), 
but it can cause problems on other systems (those where long is larger than int). 
The problems can include incorrect output or even crashes.
*/