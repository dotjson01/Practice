#include<stdio.h>
#include<string.h>

int main(){
    char name []= "Hello";
    char *ptr ;
    ptr = name;
    while (*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
    
}