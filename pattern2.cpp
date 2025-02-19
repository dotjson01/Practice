#include<bits/stdc++.h>
using namespace std;

void pattern2(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
} 
void pattern3(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
} 
void pattern4(int n){
    for(int i = 1;i<=n;i++){
        for(int j=0;i<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern2(n);
    pattern3(n);
    pattern4(n);
};