#include<stdio.h>

    static int count = 5;
int main(){
    printf("count=%d\n",count--);
    if(count!=0)
        main();
    return 0;
}