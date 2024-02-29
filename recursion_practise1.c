#include<stdio.h>

void factorize (int , int );

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    factorize(num,2);
    return 0;   
}

void factorize (int num, int i){
    if (i<=num){
        if (num%i==0){
            printf("%d ",i);
            num=num/i;

        }
        else
            i++;

        factorize(num,i);
    }   
}  

