#include<stdio.h>

int main(){
    char ch='A';
    int k=35;
    float a=3.14;
    printf("%p\n",&ch);
    printf("%p\n",&k);
    printf("%p\n",&a);
    return 0;
}

// %p is used to print the address of the variable