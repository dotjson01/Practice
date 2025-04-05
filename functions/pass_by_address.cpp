#include<iostream>
using namespace std;

void swap(int *a,int *b){ // 
    int temp =  *a;
    *a = *b;
    *b = temp;
    cout<<"Hello I am Local Stack after executing I' will be deleted"<<endl;
    cout<<"Value of x: "<<*a<<" Value of y: "<<*b<<endl;
}
int main(){
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    swap(&x,&y); // address are passing to function not values 

    cout<<"Hello I am Main Code after executing I' will be Remain"<<endl;
    cout<<"Value of x: "<<x<<" Value of y: "<<y<<endl;
    cout<<"Value of x: "<<&x<<" Value of y: "<<&y<<endl;


    cout<<"Hence Proved Pass by Address "<<endl;
    
    return 0;
}

/*

Think of it like this:

& is like getting someone's home address
* is like visiting that address to talk to the person

*/