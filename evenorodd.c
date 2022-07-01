#include<stdio.h>

int main(){
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    if (a%2==0)
    {
    printf("it is even no");
    }
    else if (a%2==!0)
    {
    printf("it is odd no.");
    }
    return 0;
}