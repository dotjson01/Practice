#include<stdio.h>
int main()
    {
        int temp;
        printf("Enter the temperature:\n");
        scanf("%d",&temp);
        switch(temp)
        {
            case 1:
            printf("You are in 1st floor\n");
            break;
            case 2:
            printf("You are in 2nd floor\n");
            break;
            case 3:
            printf("You are in 3rd floor\n");
            break;
            case 4:
            printf("You are in 4th floor\n");
            break;
            case 5:
            printf("You are in 5th floor\n");
            break;
            default:
            printf("You are in the basement\n");
        }
        return 0;   
    }