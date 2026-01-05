#include<iostream>


int square(int x){
    int result = x * x;
    return result;
}

int main(){

    int n = 5;
    std::cout<<"I have "<<n<<std::endl;

    //function 
    int sqa = square(n);

    std::cout<<"The value of sqa "<<sqa<<std::endl;
    std::cout<<"Original value "<<n<<std::endl;
    
}