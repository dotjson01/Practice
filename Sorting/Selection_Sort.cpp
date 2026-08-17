#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    // Traverse the array
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i; // Assume the current index holds the minimum value
        
        // Inner loop searches the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j; // Update mini if a smaller element is found
            }
        }
        
        // Swap the found minimum element with the first element of the unsorted part
        // swap(arr[i], arr[mini]);
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

      // Print array after sorting
    cout << "After Selection Sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {13, 45, 4, 52, 20};
    int n = sizeof(arr) / sizeof(arr[0]); // Fixed the size calculation

    // Print array before sorting
    cout << "Before Selection Sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // Run selection sort
    selection_sort(arr, n);

    return 0;
}
