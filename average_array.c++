#include<bits/stdc++.h>
using namespace std;

double average_array(int arr[],int n){
    int average=0;
    for(int i=0;i<n;i++){
        average=average+arr[i];
    }
    return average/double(n);
}

int main(){
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<average_array(arr,n);
    return 0;
}