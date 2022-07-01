#include<stdio.h>

int main(){
    int marks[4];
    printf("enter the value of student 1\n");
    scanf("%d",&marks[0]);
     printf("enter the value of student 2\n");
    scanf("%d",&marks[1]);
    printf("enter the value of student 3\n");
    scanf("%d",&marks[2]);
    printf("enter the value of student 4\n");
    scanf("%d",&marks[3]);
    printf("you have entered %d %d %d %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}