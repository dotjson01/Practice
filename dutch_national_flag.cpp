#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, -2, -5, 6, 3, -6};
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {
        while (low < high && arr[low] < 0) low++;
        while (low < high && arr[high] >= 0) high--;
        if (low < high) {
            std::swap(arr[low], arr[high]);
        }
    }

    // Print result
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}