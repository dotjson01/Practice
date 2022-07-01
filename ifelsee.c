#include<stdio.h>

int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if (a>0)
    {
    printf("it is a positive number");
    }
    else if (a<0)
    {
    printf("it is negative number");
    }
    else if (a=0)
    {
    printf("it is zero");
    }


    return 0;
} 