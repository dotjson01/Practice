#include<stdio.h>

int main(){
    struct book 
    {
        char name; float price; int pages;
    };
    struct book b1, b2, b3;
    printf("Enter name, price and pages of book 1\n");
    scanf("%c %f %d", &b1.name, &b1.price, &b1.pages);
    printf("Enter name, price and pages of book 2\n");
    scanf("%c %f %d", &b2.name, &b2.price, &b2.pages);
    printf("Enter name, price and pages of book 3\n");
    scanf("%c %f %d", &b3.name, &b3.price, &b3.pages);
    printf("Book 1\nName: %c\nPrice: %f\nPages: %d\n", b1.name, b1.price, b1.pages);
    printf("Book 2\nName: %c\nPrice: %f\nPages: %d\n", b2.name, b2.price, b2.pages);
    printf("Book 3\nName: %c\nPrice: %f\nPages: %d\n", b3.name, b3.price, b3.pages);
    return 0;
    
}