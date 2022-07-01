#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value y:");
    scanf("%d",&y);
    if (x>y)
    {
        printf("x is greatr than y\n");
    }
    if(x<y)
    {
        printf("y is greater than x\n");
    }
    if(x==y)
    {
        printf("x ix equal to y\n");
    }
    printf("NOW HAPPY ");
    return 0;

}    