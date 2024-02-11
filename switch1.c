#include<stdio.h>
int main(){
    int i=3;
    switch(i){
        case 0:
        printf("Customer are dicey\n");
        break;
        case 1+2:
        printf("Market are dicey\n");
        break;
        case 4+2:
        printf("Investors are dicey\n");
        break;
        default:
        printf("No one is dicey\n");
    }
}