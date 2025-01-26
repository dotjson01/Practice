#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

int main() {

    //creating vector of element 0 and 1 
    std::vector<int> arr{1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1};

    //array starting from left to right 
    int start = 0;

    //array ending moving towards right to left 
    int end = arr.size() - 1;

    //incrementing index value
    int i = 0;


    while (i != end) {
        if (arr[i] == 0) {
            std::swap(arr[start], arr[i]);
            start++;
            i++;
        } else {
            std::swap(arr[end], arr[i]);
            end--;
        }
    }

    std::cout << "Sorted 0 and 1: ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}