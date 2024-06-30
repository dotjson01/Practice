#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[20],news[20];
    char *s,*t;
    int pos, n,i;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter the position and no. of character to extracted ");
    scanf("%d %d",&pos,&n);
    s = str;
    t = news;
    if (pos<0 || pos>strlen(str)){
        printf("Invalid position\n");
        exit(1);
    }
    if(n<0)
    n=0;
    if(n>strlen(str))
    n=n-strlen(str)-1;
    s=s+pos;
    for(i=0;i<n;i++)
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    printf("The extracted string is %s\n",news);
    return 0;
}

