#include<iostream>
using namespace std;

void funA(int n);
void funB(int y);

void funA(int n){
    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}

void funB(int y){
    if(y>0){
        cout<<y<<endl;
        funA(y/2);
    }
}

int main(){
    int x= 20;
    funA(x);

    return 0;
}