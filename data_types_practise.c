#include<stdio.h>

int i=0;
void val(); //  function declaration

int main(){
    printf("\n i=%d\n",i); 
    i++;
    val(); // function call
    printf("\n i=%d\n",i);
    val(); // function call
    return 0;
}

void val(){ // function definition
    i= 100;
    printf("value of i=%d\n",i);
    i++;
}