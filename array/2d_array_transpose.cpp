#include <iostream>

int main() {
    // arr created 3x4 matrix
    int arr[3][4] = {
        {1, 2, 3, 21},
        {4, 5, 6, 32},
        {7, 8, 9, 54}
    };

    int rows = 3;
    int cols = 4;

    // Create a new 2D array to store the transpose
    int transpose[4][3];

    // Transpose the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print the transposed matrix
    std::cout << "Transposed matrix:" << std::endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}