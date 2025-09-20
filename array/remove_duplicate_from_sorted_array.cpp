#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
    public :
    vector<int> removeDuplicates(vector<int> &arr){
        int x;
        auto it = unique(arr.begin(), arr.end()); // finding the unique item and put into it variable 
        arr.erase(it, arr.end()) ; // element stored in it  variable remove it from end 
        return arr;
    }
};
int main(){
    Solution s;
    vector<int> arr = {10,20,20,30,30,40,40};
    vector<int> output = s.removeDuplicates(arr);
    for(int x : output){
        cout<<x<< " ";
    }
    cout<<endl;

    return 0;
}