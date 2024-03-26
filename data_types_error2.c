#include<stdio.h>

int main(){
    long double a = 25.345e4;  // Changed 'long float' to 'long double' and variable name to 'a'
    double b = 25;  // Changed 'unsigned double' to 'double'
    printf("%Lf\n %lf\n", a, b);  // Changed '%d' to '%lf' and 'a' to 'b'
    return 0;
}