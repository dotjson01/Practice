#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> largestAndSecondLargest(vector<int> &arr) {
        int firstmax = INT_MIN;
        int secondmax = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > firstmax) {
                // purana max → second max
                secondmax = firstmax;
                firstmax = arr[i];
            }
            else if(arr[i] < firstmax && arr[i] > secondmax) {
                secondmax = arr[i];
            }
        }
        
        if(secondmax == INT_MIN) {
            secondmax = -1;
        }
        
        return {firstmax, secondmax};
    }
};


int main() {
    vector<int> arr = { 12, 43, 100, 56, 23, 90};
    // vector<int> arr = {3, 1, 3}; 
    // vector<int> arr = {5, 5, 5, 5};            Sab elements same ho:
    // vector<int> arr = {10};                    Sirf ek hi element ho:
    // vector<int> arr = {-5, -10, -2, -30};      Negative numbers ho:

    Solution s;
    vector<int> ans = s.largestAndSecondLargest(arr);   // new vector create kiya aur ek function parameter bhjke , value wapas leke aaya 
    
    cout<<"Largest Value : " << ans[0] << " Second largest value : "<<ans[1]<<endl;
    return 0;
}