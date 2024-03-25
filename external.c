#include<stdio.h>

int i;
void increment (); //function decalaration
void decrement(); //function declaration

int main(){
    printf("\n i=%d\n",i); //i is global variable so it is initialized to 0
    increment(); // function call 3 times
    increment();
    increment();
    decrement(); // function call 3 times
    decrement();
    decrement();
    return 0;
}

void increment (){ // function definition
    i=i+1; //i is global variable so it is incremented by 1
    printf("On incrementing i=%d\n",i);
}

void decrement(){ // function definition
    i=i-1; //i is global variable so it is decremented by 1
    printf("On decrementing i=%d\n",i);
}