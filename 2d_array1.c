#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *name [6], n[50];
    int len, i;
    char *p;
    for (i=0;i<=5;i++)
    {
        printf("Enter name");
        scanf("%s", n);
        len = strlen(n);
        p = (char *)malloc(len+1);
        strcpy(p,n);
        name[i] = p;
    }
    for (i=0;i<=5;i++)
        printf("%s\n", name[i]);
    }