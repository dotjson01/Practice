#include<iostream>
#include<string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a; // address ka reverese  krke value phirse mil gya 
    std :: cout << "The content of a is " << a << std :: endl; // a ki value milega 
    std :: cout << " The address of ptr"<<ptr << std :: endl; // ptr ka address milega
    std :: cout << " The Address of a"<< &a << std :: endl; //  a ka joh value hai uska address milega
    return (0);

}