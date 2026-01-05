#include<iostream>


void tryvalue(int x){
    x= 100;
    std::cout<<"Function ke andar vali value "<<x<<std::endl;
}

void tryreference(int &x){
    x=100;
    std::cout<<"Function ke andar vali value "<<x<<std::endl;
}

int main(){

    int number1 = 5;
    int number2 = 5;


    std::cout<<"Pass by value"<<std::endl;
    std::cout<<"Value of number1-> "<<number1<<std::endl;

    tryvalue(number1);

    std::cout<<"Original Value of number1-> "<<number1<<std::endl;


    std::cout<<"Pass by reference"<<std::endl;
    std::cout<<"Value of number2-> "<<number2<<std::endl;

    tryreference(number2);

    std::cout<<"Original value of number2-> "<<number2<<std::endl;

    return 0;


}