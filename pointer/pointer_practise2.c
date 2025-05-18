#include <stdio.h>

int main()
{
    float a = 13.5;
    float *b, *c;
    b = &a; // the address of a is assigned to b . So, b now points to a 
    c = b; //The value of b (which is the address of a) is assigned to c. So, c now also points to a
    printf("The address of a is %\n", &a);
    printf("The address of b is %u\n", b);
    printf("The address of c is %u\n", c);
    printf("%f %f %f %f %f\n", a, *(&a), *&a, *b, *c);
}