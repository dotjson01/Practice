#include<bits/stdc++.h>
using namespace std;

    int max(int x,int y)
    {
        if(x>y)
        return x;
        else 
        return y;
    }
int main(){
    int a=20;
    int b=34;
    int m=max(a,b);
    cout<<m<<endl;
    return 0;
}