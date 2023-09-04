#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    if(high >= low){
        int middle = low + (high - low) / 2;
        if(arr[middle] == key)
            return middle;
        if(arr[middle] > key)
            return binary_search(arr, low, middle - 1, key);
        return binary_search(arr, middle + 1, high, key);
    }
    return -1;
}

int main()
{
    int arr[] = {2, 35, 45, 57, 64, 74};
    int key = 74;
    int len = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, len - 1, key);
    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;
    return 0;
}





