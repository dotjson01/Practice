#include<stdio.h>
int swapv(int a, int b); //declaration of function
int main(){
    int a=10,b=20;
    swapv(a,b); 
    printf("Before swap: a=%d, b=%d\n",a,b);//call by value
    return 0; // you can also not to include return 0; it will also work
}

int swapv(int a, int b){
    int t;
    t=a;
    a=b;
    b=t;    
    printf("After swap: x=%d, y=%d\n",a,b);
}