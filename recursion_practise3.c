#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;  // The main function starts by declaring an integer variable i and initializing it to 0
    i++;     // The next line increments i by 1, so i is now 1.
    if(i<=5){    //The if statement checks if i is less than or equal to 5. Since i is 1, this condition is true
        printf("Good");
        exit(0);    
        main();
    }
    return 0;   
}

//  Then it calls exit(0). This function immediately terminates the program with a status of 0, which generally indicates successful execution. Because exit(0) stops the program, the lines of code that come after it are never executed.

// The call to main() after exit(0) is never reached, so the recursion you might be  expecting doesn't happen. Even if it were reached, it would not create a loop because i is reinitialized to 0 every time main is called.
