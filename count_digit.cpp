#include<iostream>
#include<math.h>

int main(){
    int number;
    std::cout<<"Enter the Number: ";
    std::cin>>number;

    int originalnumber = number;
    int count = 0;

    //condition applying 
    if(number == 0){
        count = 1;
    }
    else {
    while(number>0){
        int store_number = number%10;
        number /= 10;
        count ++;
        
    }
    }
    std::cout<<"Digit Counted of "<<originalnumber<<" is "<<count<<std::endl;
    return 0;
}