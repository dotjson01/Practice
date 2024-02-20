// #include<stdio.h>

// int main(){
//     int num;
//     int factorial(int);
//     printf("Enter any numbner:");
//     scanf("%d", &num);

//     num = factorial(num);
//     printf("The factorial of the number is: %d", num);
//     return 0;
// }

// int factorial (int num){
//     int i,fact=1;
//     for(i=1; i<=num; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

#include <stdio.h>

int factorial(int); // move function prototype to global scope

int main()
{
    int num, result;
    printf("Enter any number: ");
    scanf("%d", &num); // combine printf and scanf

    result = factorial(num); // use separate variable for result
    printf("The factorial of the number is: %d", result);
    return 0;
}

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact *= i; // use shorthand for multiplication assignment
    }
    return fact;
}

// Both program having same runtime of the program is O(n),
//  where n is the input number. This is because the for loop iterates 
//  through each number from 1 to n, and the multiplication operation 
//  takes O(1) time. The memory complexity of the program is O(1), as it 
//  only uses a constant amount of memory to store the factorial.