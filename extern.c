#include<stdio.h>
#include "extern1.c"

int i=35;
int fun1();
int fun2();

int main(){
    printf("%d\n",i);
    fun1();
    fun2();
    return 0;
}
