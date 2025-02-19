#include<iostream>
#include<math.h>

int main(){
    // Number given by user 
    int number;
    std::cin>>number;
    if(number%10 %2 == 0){
        std::cout<<"The Number is Even"<<std::endl;
    }
    else{
        std::cout<<"The Number is Odd"<<std::endl;
    }
    return 0;
}