#include<stdio.h>
#include<stdlib.h> // for exit()
#include<string.h> // for strlen()
#include<ctype.h> // for isalpha()

int main(){
    int amount,note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    int total;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    note_100 = amount/100; 
    amount = amount%100; 

    note_50 = amount/50;
    amount = amount%50;

    note_20 = amount/20;
    amount = amount%20;

    note_10 = amount/10;
    amount = amount%10;

    note_5 = amount/5;
    amount = amount%5;

    note_2 = amount/2;
    amount = amount%2;

    note_1 = amount/1;
    amount = amount%1;


    printf("The number of 100 rupee notes is: %d\n",note_100);
    printf("The number of 50 rupee notes is: %d\n",note_50);
    printf("The number of 20 rupee notes is: %d\n",note_20);
    printf("The number of 10 rupee notes is: %d\n",note_10);
    printf("The number of 5 rupee notes is: %d\n",note_5);
    printf("The number of 2 rupee notes is: %d\n",note_2);
    printf("The number of 1 rupee notes is: %d\n",note_1);
    
    // add code to print the number of 50, 20, 10, 5, 2 and 1 rupee notes
    total= (note_100+note_50+note_20+note_10+note_5+note_2+note_1);
    printf("The total number of notes is: %d\n",total);


    return 0;



}