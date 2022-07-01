#include <stdio.h>

int main()
{
    int a = 2, b = 5;
    int c = 10, d = 5;
    if (a < b && a != 0)
        
    {
        printf("&& operator : both are true\n");
    }
    if (c < d || d != 0)
        
    {
        printf("|| operator : only one condition is true\n");
    }
    if (!(a > b && d != 0))
    {
        printf(" ! operator :both are true\n");
    }
    else
    {
        printf("! my mind is true but you are wrong");
    }

    return 0;
}