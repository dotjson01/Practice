#include<bits/stdc++.h>
using namespace std;

void increment(int *x){
    (*x)+2;
}

int main(){
    int x=10;
    cout<<"before increment"<<x<<endl;
    increment(&x);
    cout<<"after increment"<<x<<endl;
    return 0;

}