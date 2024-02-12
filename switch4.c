#include<stdio.h>

int main(){
    int temp, category;
    printf("Enter the temperature: ");
    scanf("%d",&temp);

    if (temp <= 20) {
        category = 1;
    } else if (temp > 20 && temp <= 30) {
        category = 2;
    } else if (temp > 30 && temp <= 40) {
        category = 3;
    } else {
        category = 4;
    }

    switch(category){
        case 1:
            printf("O");
            break;

        case 2:
            printf("p");
            break;

        case 3:
            printf("wish");
            break;
            
        default:
            printf("not valid");
    }

    return 0;
}