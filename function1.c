#include<stdio.h>
 int calsum(int x, int y, int z);
int main(){
    int a,b,c,sum;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=calsum(a,b,c);
    printf("The sum of three numbers is %d",sum);
    return 0;
}
int calsum(int x, int y, int z){
    int sum;
    sum=x+y+z;
    return sum; 
}       