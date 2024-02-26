#include<stdio.h>

    void swapr(int *, int *);

int main(){
    int a=10, b=20; // the value of a and b are 10 and 20
    printf("a=%d, b=%d\n", a, b);
    swapr(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

void swapr(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}