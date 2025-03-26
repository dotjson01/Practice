#include <iostream>

// row and column sum print
int main() {
    // array declared and initialized
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int rows = 4;
    int cols = 3;

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

    return 0;
}