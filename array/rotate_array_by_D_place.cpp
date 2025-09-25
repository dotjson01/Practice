#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {

    public:

    vector<int> rotate_array_by_D_place(vector<int> &arr){
        rotate(arr.begin(), arr.begin() + 3, arr.end());
        return arr;
    }
};


int main(){
    Solution s;
    vector<int> arr = {1,2,3,4,5,6,7,8};
    vector<int> output = s.rotate_array_by_D_place(arr);

    for(int x : output){
        cout<< x << " ";
    }
    cout<<endl;
    return 0;
}