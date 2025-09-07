#include<iostream>
using namespace std;

 int fun(int num){
    int sum=0;
         while(num>0){
        int lastDigit = num%10;
         sum += 1;
        num = num/10;
    }
    return sum;
    }

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int count=fun(n);
   
    cout<<count<<endl;
    return 0;
    
}