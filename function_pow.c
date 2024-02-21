#include<stdio.h>
#include<math.h>

float power(float , int);
int main()
{
    float a;
    float result;
    int b;
    printf("Enter the number: ");
    scanf("%f",&a);
    printf("Enter the power: ");
    scanf("%d",&b);

    result = power(a,b);
    printf("The result is %f", result);
  
    return 0;
}


float power(float a, int b){
    float result;
    result = pow(a,b);
    return result;
}   

