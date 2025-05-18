#include<stdio.h>
int main(){
    int suite=1;
    switch(suite){
        case 0:
            printf("Diamonds\n"); // not executed
        case 1:
            printf("Clubs\n"); // executed and control goes to next case
        case 2:
            printf("Hearts\n"); // executed and control goes to next case
        default:
            printf("Spades\n");
    }
}

//correct code
#include<stdio.h>
int main(){
    int suite=1;
    switch(suite){
        case 0:
            printf("Diamonds\n");
        case 1:
            printf("Clubs\n");
            break;
        case 2:
            printf("Hearts\n");
            break;
        default:
            printf("Spades\n");
    }
}