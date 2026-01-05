#include<iostream>

void actualvalue(int &x){
    std::cout<<"Function ke andar"<<x<<std::endl;
    x= 100;
    std::cout<<"After changing value of x"<<x<<std::endl;
}


int main(){

    int number = 10;
    std::cout<<"I m having number "<<number<<std::endl;

    actualvalue(number);

    std::cout<<"Funcation ke vapas aane ke baad value kya hai "<<number<<std::endl;
     return 0;

}