#include<stdio.h>

void binaryequivalent(int n);

void binaryequivalent(int n){
    if(n != 0){
        binaryequivalent(n/2);
        printf("%d",n%2);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binaryequivalent(n);
    printf("\n");
    return 0;
}