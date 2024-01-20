#include <iostream>

int add(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans + arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=add(arr,n);
    cout<<sum;
    return 0;
}