/*
🔹 Problem Statement

Diya gaya array in-place reverse karo
(extra array use nahi karna).

Example:

[1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]

 */

 #include<iostream>
 #include<vector>

class Solution {
    // making constructor or calling fn
    public:
    void Reversed(std::vector<int>& arr){
        int n = arr.size();

        // using while loop
        int left = 0;
        int right = n-1;

        for (int left = 0 ; left <right;left++){
            std::swap(arr[left], arr[right]);
            right--;
        }
        std::cout<<"After Reversed"<<std::endl;
        for(int i=0; i<n;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }

};


 int main(){

    int n;
    std::cout<<"Enter the Size of array"<<std::endl;
    std::cin>>n;

    std::vector<int> arr(n);

    std::cout<<"Enter the Element inside a array"<<std::endl;
    // using for loop to get values
    for (int i = 0; i < n; i++)
    {      
          std::cin>>arr[i];        
    }

    std::cout<<"Before Reversed"<<std::endl;
    Solution obj;
    
    obj.Reversed(arr);
 }