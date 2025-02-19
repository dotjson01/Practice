#include <iostream>
#include <math.h>

int main()
{
    // sum of digit which means if number is 456 : 4+5+6, 6+5+4
    int number;
    std::cin >> number;
    int sum = 0;
    int originalnumber = number; 

    while (number > 0)
    {
        // making a memory to store the value of sum
         sum += number % 10; // number%10 gives last number and sum+ means e.g sum have 9 value with add : 9+
         number /= 10;       // number suppose 549 , 569/10 overwriting on same variable
        // so new varibale number is 56
        
    }
    std::cout << "Sum of Digit " << originalnumber << " is " << sum << std::endl;

    return 0;
}