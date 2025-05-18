#include<stdio.h>
int main(){
    char suite=3;
    switch (suite){
        case 1:
            printf("Clubs");
        case 2:
            printf("Diamonds");
            default:
            printf("Hearts\n");

    }
    printf("I thought one wear a suite\n");
    return 0;
    }