#include <iostream>
#include<math.h>
#include<climits>

// Function to perform linear search in a 2D array
bool linearSearch(int arr[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i =0 ;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi){
            maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i =0 ;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] < mini){
            mini = arr[i][j];
            }
        }
    }
    return mini;
}



int main() {
    // array declared and initialized
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 22}
    };

    int rows = 4;
    int cols = 3;
    int key = 5; // Example key to search for
    int maxi;
    int mini;

    // outer loop for rows
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;

        // inner loop for columns
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        std::cout << "Sum of row " << i << ": " << rowSum << std::endl;
    }

    // outer loop for columns
    for (int j = 0; j < cols; j++) {
        int colSum = 0;

        // inner loop for rows
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        std::cout << "Sum of column " << j << ": " << colSum << std::endl;
    }

    // Perform linear search
    if (linearSearch(arr, rows, cols, key)) {
        std::cout << "Element " << key << " found in the array." << std::endl;
    } else {
        std::cout << "Element " << key << " not found in the array." << std::endl;
    }

    std::cout<<"Max: "<<getMax(arr,rows,cols)<<std::endl;
    std::cout<<"Min: "<<getMin(arr,rows,cols)<<std::endl;

    return 0;
}