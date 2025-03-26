#include<stdio.h>

int main(){
    int a[1000],i,n,key;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    {
        printf("enter what you want to print:");
        scanf("%d",&key);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]==key)
      {
          printf("element found");
          return 0;
      }
    
    }
        printf("printed not found");
    }