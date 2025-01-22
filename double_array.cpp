#include<stdio.h>
#include<iostream>

using namespace std;


int main(){
    int arr[500];
    int n;
    cout<<"How many number you want to print"<< endl;
    cin>>n;

    cout<<"Enter the number"<< endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //print double

    cout<<"double : " ;

    for(int i=0 ;i<n;i++){
        cout << 2 * arr[i] <<" ";
    }
return 0;
}