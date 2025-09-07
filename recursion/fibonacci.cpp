#include<iostream>


int fib(int n){
    if(n == 0 ||n== 1)
    return n;
    return fib(n-1) + fib(n-2);
}
int main(){

    int n;
    std::cout<<"Enter the Fibonnaci Number "<<std::endl;
    std::cin>>n;
    std::cout<<"Fibonnaci Number of "<<n<<" is = "<<fib(n);
}