#include<stdio.h>
#define AREA(x)(3.14*x*x) /*x was a placeholder for the radius of the circle.*/
int main(){
    float r1=6.25 , r2=2.5;
    printf("%f %f\n", AREA(r1), AREA(r2));
    /*
    The preprocessor replaces AREA(r1) with (3.14*r1*r1) and AREA(r2) with (3.14*r2*r2) before the code is compiled
    */
}