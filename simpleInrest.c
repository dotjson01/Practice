#include<stdio.h>
int main(){
    float principal,rate,time,simpleinterest;
    printf("enter the value of principal\n");
    printf("enter the value of interst\n");
    printf("enter the value of time\n");
    scanf("%f %f %f",&principal,&rate,&time);

    //simple intrest
    simpleinterest=principal*rate*time/100;

    printf("%f",simpleinterest);
    return 0;

}