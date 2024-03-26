#include<stdio.h>

static int y; 
/*
In C, when you declare a variable as static and don't initialize it, 
it gets automatically initialized to zero. 
*/
int main(){
    static int z;
    printf("%d %d\n", y,z);
    return 0;
}