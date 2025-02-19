#include<iostream>
#include<math.h>

int main(){
    //number taken from user 
    int n;
    std::cin>>n; // input taken from user
    int last_digit = n%10; //performing operation on number
    std::cout<<"Last Digit of "<<n<<" is "<<last_digit<<std::endl;
    return 0;
}