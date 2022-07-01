#include<stdio.h>

int main(){
    int a=2;
    while(a<20){
        printf("value of a: %d\n",a);
        a++;
        if (a>15){
            break;

        }
    }
    return 0;
}