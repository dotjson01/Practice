#include<stdio.h>
#include<string.h>  // For strcat

int main(){
    char source[]= "Sahil ", target[30]= "Hello ";
    strcat(target,source);
    printf("source string: %s\n",source);    
    printf("target string: %s\n",target);    
    return 0;       
}