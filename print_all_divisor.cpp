#include <iostream>
#include <math.h>

// printing all divisor which completelt divided by that particular number

int main()
{
    // decalre the input
    int number;
    std::cout<<"Enter the Number: "<< std::endl;
    std::cin >> number;

    //for negative numbers
    if(number <=0){
        std::cout<<"Enter the positive number"<<std::endl;
        return 1;
    }

    //for postive number
    for(int i = 1;i<=number;i++){
        if(number % i == 0){
            std::cout<< i <<" ";
        }
    }
}