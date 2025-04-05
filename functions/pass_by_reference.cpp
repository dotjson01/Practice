#include<iostream>
using namespace std;


void swap(int &a,int &b){
    int temp = a ;
    a = b;
    b = temp;
    cout<<"Hello I am Local Stack after executing I' will be deleted"<<endl;
    cout<<"Value of x: "<<a<<" Value of y: "<<b<<endl;
}
int main(){

    int x,y;
    cout<<"Enter the Value of X and Y"<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"Hello I am Main Code after executing I' will be Remain"<<endl;
    cout<<"Value of x: "<<x<<" Value of y: "<<y<<endl;

    cout<<"Hence Proved Pass by Reference actually overwrite the code on a memory"<<endl;

    return 0;
}

/*
Call by Reference (with &):

You share a direct link to your Google Doc
Any changes either person makes are instantly visible to both
You both see and edit the SAME document

*/