#include<stdio.h>
int x=10;
int main(){
    int x=20;
    {
        int x=30;
        printf("x=%d\n",x);
    }     
    printf("x=%d\n",x);  
}