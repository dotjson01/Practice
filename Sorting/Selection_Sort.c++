#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
                mini = j;
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout<<"After Sorting"<<endl;
    for(int i = 0 ; i < n;i++){
        cout<<arr[i];
    }

}

int main()
{

    int arr[] = {13, 45, 4, 52, 20};
    int n = sizeof(arr) / sizeof(arr[0]); // yaha se n ki value ki aayi hai
    // 20/4 = 5

    selection_sort(arr, n);
}