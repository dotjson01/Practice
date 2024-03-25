#include<stdio.h>


int x=10;
void display(); //function declaration
int main(){
    int x=20;
    printf("\n x=%d\n",x); //local variable x is printed
    display(); // function call
    return 0;
}

void display(){ // function definition
    printf("x=%d\n",x); //global variable x is printed
}
