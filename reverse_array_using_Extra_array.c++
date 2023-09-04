// #include<stdio.h>
// using namespace std;

// void reverseArray(int arr[], int start, int end){
//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++; end--;
//     }
// }

// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     printArray(arr, size);
//     reverseArray(arr, 0, size-1);
//     printArray(arr, size);
//     return 0;
// }


#include<iostream>
using namespace std;

void printArray(int ans[],int n){
    cout<<"The reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

void reverseArray(int arr[],int n){
    int ans[n];
    for(int i= n-1;i>=0;i--){
        ans[n-i-1]=arr[i];

    }
    printArray(ans,n);

}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    reverseArray(arr, n); // added the second argument
    return 0;
}
