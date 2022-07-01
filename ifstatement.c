#include<stdio.h>
int main()
{
    {
        int marks;
        printf("enter marks");
        scanf("%d",marks);
        if(marks>=30)
        {
            printf("student is pass");

        }
        if (marks<33)
        {
            printf("students is fail");
        }
        return 0;

    }
}