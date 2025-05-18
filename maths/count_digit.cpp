#include<iostream>
using namespace std;

int main(){
    int n = 986456;
    int sum = 0;
    while(n>0){
        int lastDigit = n%10;
        sum += lastDigit;
        n = n/10;
    }
    cout<<sum<<endl;
    return 0;
    
}