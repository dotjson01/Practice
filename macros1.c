#include<stdio.h>  
#define ISDIGIT(n) (n>=48 && n<=57)
#define ISCAPITALALPHABET(n) (n>='A' && n<='Z')
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ISDIGIT(ch)){
        printf("The character is a digit.\n");
    }
    else if(ISCAPITALALPHABET(ch)){
        printf("The character is a capital alphabet.\n");
    }
    else{
        printf("The character is neither a digit nor a capital alphabet.\n");
    }
    return 0;
}