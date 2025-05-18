#include<stdio.h>

int main(){
    float p=23.24;
    float *q, *r;
    q=&p;
    r=q;
    printf("%f\n",*q);
    printf("%f\n", *r);
    return 0;
}