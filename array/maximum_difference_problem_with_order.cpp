#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public: 
    int MaxDiff(vector<int>&arr){
        int n = arr.size();
        //let consider
        int minsoFar = arr[0];
        int maxDiff = arr[1] - arr[0];
        for(int i = 1; i<n;i++){
            maxDiff = max(maxDiff,arr[i] - minsoFar);
            minsoFar = min(minsoFar, arr[i]);

        }
        return maxDiff;
    }
};


int main(){
    Solution s;
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
    int output = s.MaxDiff(arr);
    cout<<"Max difference problem with order is "<<output<<endl;

    return 0;
}