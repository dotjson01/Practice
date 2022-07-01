#include<stdio.h>

int main(){
    int a;
    printf("enter your percentage");
    scanf("%d",&a);
    if (a>=90)
    {
    printf("you got a grade");    
    }
    else if(a>=80)
    {
        printf("you got b grade");
    }
    else if (a>=70)
    {
        printf("you got c grade");
    }
    else if(a>=60)
    {
        printf("you got d grade");
    }
    else if (a<=30)
    {
        printf("you are fail");
    }
    
    return 0;
}