#include<stdio.h>
#include<stdlib.h>

int main(){
    int goals;
    printf("Enter the number of goals scored by Pune: ");
    scanf("%d", &goals);
    if (goals<=5)
    goto sos;
    else{
        printf("About time Pune scored more than 5 goals!\n");
        exit(78);
    }
    sos:
    printf("Pune scored less than 5 goals!\n");
    return 0;
}