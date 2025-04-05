#include<iostream>
using namespace std;

// int v=0; // global variable can be access from any function
void fun(){
    static int v=0; // just like global variable, remains at memory , only inside the function
    int a =5; // a erase after stack remove after function call
    v++;
    cout<<a<<" "<<v<<endl;
}
int main(){
    fun();
    fun();
    fun();
    // v++;
    // cout<<v<<endl;
} 

// Scope variable are only access within the function limited 