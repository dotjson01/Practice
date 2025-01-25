#include <iostream>
#include <vector>

// intersection of 2 arrays = common element found
// linear search approach
// checking as traversal

int main() {

    // creating two vectors holding the elements inside them
    std::vector<int> arr{1, 2, 3, 4, 5, 6};
    std::vector<int> brr{3, 2, 4};

    // storing the value of arr and brr at ans
    std::vector<int> ans;

    // creating outer loop to check inner loop elements
    for (int i = 0; i < arr.size(); i++) {
        // passing inner loop to verify element from inner loop
        for (int j = 0; j < brr.size(); j++) {
            int element = arr[i];
            // if condition falls true then checked marked
            if (element == brr[j]) {
                ans.push_back(element);
                break; // break to avoid duplicate entries
            }
        }
    }

    // Displaying the elements of vector ans
    for (auto value : ans) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}