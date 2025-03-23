#include<iostream>


int factorial(int n){
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;

    return n * factorial(n-1);
}
int main(){
    int n;
    std::cout<<"Enter the Factorial Number"<<std::endl;
    std::cin>>n;
    std::cout<<"Factorial of "<<n<<" is = "<<factorial(n);
    std::cout<<std::endl;
}