// lib
#include<iostream>

void shopkeeper(int x){
    std::cout<<"I have "<< x <<std::endl;
    x= 100;
    std::cout<<"I have "<<x<<std::endl;
}

int main(){

    int myNum  = 5;
    std::cout<<"I have "<<myNum<<std::endl;

    shopkeeper(myNum);
    std::cout<<"I have " <<myNum<<std::endl;
}