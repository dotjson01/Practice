#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    int flag = 0;
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}