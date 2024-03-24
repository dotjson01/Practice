#include<stdio.h>

void increment (); //function decalaration

    int main(){
        increment (); // function call 3 times 
        increment();
        increment();
        return 0;
    }
    void increment (){ // function definition   
        auto int i=1;
        static int j=1;
        i=i+1;
        j=j+1;
        printf("%d %d\n",i,j);
    }