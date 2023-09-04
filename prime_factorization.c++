#include<bits/stdc++.h>
using namespace std;

void primefactorizatrion(int n){
    int factor=2;
    while(n>1){
        while(n%factor==0){
            cout<<factor<<" ";
            n/=factor;
        }
        factor++;
    }
}



int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    cout<<"Prime Factor of"<<n<<"is"<<endl;
    primefactorizatrion(n);
    return 0;
}