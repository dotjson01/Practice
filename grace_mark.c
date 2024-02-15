#include<stdio.h>

int main(){
    int class, failed_subjects, category;
    int grace_marks = 0;

    // Assume class = 1 means first class
    // Get the class and number of failed subjects from user or elsewhere
    printf("Enter class and number of failed subjects: ");
    scanf("%d %d", &class, &failed_subjects);

    if (class == 1) {
        if (failed_subjects > 3) {
            category = 1;
        } else {
            category = 2;
        }
    } else {
        category = 3;
    }

    switch(category){
        case 1:
            grace_marks = 0;
            break;

        case 2:
            grace_marks = 5 * failed_subjects;
            break;

        default:
            printf("not valid");
            return 0;
    }

    printf("Grace marks: %d\n", grace_marks);

    return 0;
}