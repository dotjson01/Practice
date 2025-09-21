#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:

    vector<int> rotateArray(vector<int> &arr){
        rotate(arr.begin(), arr.begin()+1, arr.end() );
        return arr;
    }

};
int main(){
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
     vector<int>output = s.rotateArray(arr);

    for(int x : output){
        cout<< x <<" ";
    }
    cout<<endl;

    return 0;
}