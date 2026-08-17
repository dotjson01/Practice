#include<iostream>
using namespace std;

int main(){
    int arr[] = {13,14,24,52,20};
    int n = size(arr) / sizeof(arr[0]);

    // print array
    cout<<"Before Selection " << "\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}