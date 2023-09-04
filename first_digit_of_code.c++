#include<bits/stdc++.h>
using namespace std;
 
float first_digit_of_code(float n){
    while(n>10){
    n=n/10;
    }
    return n;

}

int main(){
    float n;
    cin>>n;
   cout<<first_digit_of_code(n);
    return 0;

}