#include<stdio.h>

int main(){
    int chapter,yes,no;
    printf("Enter the chapter:\n");
    scanf("%d",&chapter);
    if(chapter==1)
    {
        printf("====> measurement\n");
    }
    if(chapter==2)
    {
        printf("====> vectors\n");
    }
    if(chapter==3)
    {
        printf("====> Motion in staraight line\n");
    }
    if(chapter==4)
    {
        printf("====> Projection motion and circular motion\n");
    }
    if(chapter==5)
    {
       printf("====> Laws of motion\n");
    }
    if(chapter==6)
    {
        printf("====> Work,power,and energy\n");
    }
    if(chapter==7)
    {
        printf("====> Rotational motion\n");
        
    }
    if(chapter==8)
    {
        printf("====> Gravitation\n");
    }
    if(chapter==9)
    {
        printf("====> Elasticity\n");
    }
    if(chapter==10)
    {
        printf("====> Hydrostatics\n");
    }
    else if (chapter==11)
    {
        printf("Invalid input");
    }
    printf("\n====> Want to know the topic of this chapter ?\n");
    printf("yes or no ?\n");
    scanf("%char %char",&yes,&no);
    if(yes==&yes)
    {
        printf("\n1)units\n2)defination of fundamental\n3)system of units\n");

    }
    if(no==&no)
    {
        printf("okay");
    }
    return 0;
}