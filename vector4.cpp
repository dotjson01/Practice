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


// Imagine you are organizing a party and you have two guest lists: arr and brr. You want to create a new list, ans, that contains only the guests who are on both lists.

// Here's how you do it:

// You start with an empty list ans.
// You take the first guest from arr and check if they are on brr.
// If you find the guest on brr, you add them to ans and stop checking further for this guest because you already know they are invited.
// You move to the next guest in arr and repeat the process.