#include<bits/stdc++.h>
using namespace std;


int main(){
    int largest, num1,num2,num3;
    cout<<"Enter three numbers";
    cin>>num1>>num2>>num3;

    largest =num1;
    if (num2>largest){
        largest =num2;
    }
    if(num3>largest){
        largest =num3;
    }
    cout<<"Largest number"<<largest<<endl;;
    return 0;   

}