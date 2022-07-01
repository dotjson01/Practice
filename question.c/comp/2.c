#include<stdio.h>
int *gPtr;
int main()
{
    int *lPtr=NULL;
    if(gPtr== lPtr)
    {
        printf("equal");

    }
    else{
        printf("not equal");
    }
    return 0;
}