#include<stdio.h>

int main(){
    int marks[4];
    for(int i=0; i<4;i++)
    {
        printf("enter the value of %d element of the arrays\n",i);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("the value of %d elements of the araays %d\n",i,marks[i]);

    }
}