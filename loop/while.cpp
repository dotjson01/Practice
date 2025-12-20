#include<iostream>
using namespace std;

int main(){
    // enter the number of factorial
    int n;
    int factorial =1;

    cout<<"Enter the number "<<endl;
    cin>>n;
    int originalVal = n ;
    // loop 
    while(n > 0 ){ // -1 amd 0 se upar vali value
        factorial = factorial * n;
        n--;
    }
    cout<<"Factorial of "<< originalVal<<" is "<<factorial<<endl;
}