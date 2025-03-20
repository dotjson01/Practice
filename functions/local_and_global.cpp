#include<iostream>
using namespace std;

int g=0; //global decalared

void fun(){
    int a =11; // variable created inside the stack
    cout<<g<<endl; //0
    int g = g+a;
    cout<<g<<endl;
}
int main(){

    cout<<g<<endl;
    fun();
    g++;
    cout<<g<<endl;
    return 0;

}