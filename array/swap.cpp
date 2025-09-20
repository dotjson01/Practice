#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 23, 65, 12, 54, 22};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp;
    cout<<"Size of arr"<<n<<endl;
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] =  temp;
        low++;
        high --;
    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}