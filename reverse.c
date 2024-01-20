#include<stdio.h>
#include<stdlib.h> // for exit()
#include<string.h> // for strlen()
#include<ctype.h> // for isalpha()

int main(){
    long long int d4, d3, d2, d1,n,result;
    printf("Enter a number: ");
    scanf("%lld",&n);
    d4 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;
    result = d4*1000 + d3*100 + d2*10 + d1;
    printf("The reverse of the number is: %lld",result);
    return 0;


}
