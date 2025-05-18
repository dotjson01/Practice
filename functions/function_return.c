#include<stdio.h>

float square(float); // decalring the function

int main(){
    float a,b;
    printf("Enter any numbers: ");
    scanf("%f", &a);
    b = square(a);
    printf("The square of the number is: %f", b);
    return 0;


}

float square( float a){

    float y;
    y = a*a;
    return y;
}
