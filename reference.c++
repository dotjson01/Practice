#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=10,y=20;
    int &z=x;
    z=y;
    z=z+5;
    cout<<z<<endl;
     cout<<y<<endl;
      cout<<x<<endl;

    return 0;
}