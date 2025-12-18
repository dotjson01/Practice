// check sorted if it array element is in increasing order

/*🔹 Problem Statement

Diya gaya array non-decreasing order me sorted hai ya nahi check karo.

Example:

[1, 2, 2, 3, 4] → ✅ sorted

[1, 3, 2] → ❌ not sorted
*/

#include<iostream>
#include<vector>

class Solution {
    public:
    int Sorted(std::vector<int>& arr){
        int n = arr.size();

        //edge cases 
        if(n < 0 || n == 1 )
        return 1; // empty ya element = sorted

        for(int i = 0; i<n-1;i++){ // we had i<n-1 because starting index from 0 and n-1 which is index 4 and element 5
            if(arr[i] > arr[i+1]) 
            return 0;
        }
        return 1;
    }
};

int main(){

    int n;
    std::cout<<"Enter the size of array"<<std::endl;
    std::cin>>n;  // taking input

    // taking array element in loop according to given size
    std::cout<<"Enter the value of Elements"<<std::endl;
    std::vector<int> arr(n);
    for(int i =0 ; i<n;i++){
        std::cin>>arr[i];
    }
    Solution obj;
    int result = obj.Sorted(arr);
    if(result == 1 ){
        std::cout<<"Array is Sorted "<<std::endl;
    }
    else{
        std::cout<<"Array is not sorted"<<std::endl;
    }

    std::cout<<obj.Sorted(arr)<<std::endl;
}
