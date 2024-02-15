#include<stdio.h>

int main(){
    int class, failed_subjects, category;
    int grace_marks = 0;

    // Assume class = 1 means first class
    // Get the class and number of failed subjects from user or elsewhere
    printf("Enter class and number of failed subjects: ");
    scanf("%d %d", &class, &failed_subjects);