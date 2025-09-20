#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution{
public:
vector<int> remove_all_element(vector<int>&arr){
    stable_partition(arr.begin(), arr.end(), [] (int x) 
{
    return x != 0;}
);
    // auto it = unique(arr.begin(), arr.end());
    return arr;
}
};


int main(){
    Solution s;
    vector<int> arr = {8, 0, 0, 10, 0, 20};
    vector<int> output = s.remove_all_element(arr);

    for(int x: output){
        cout<< x << " ";
    }
    cout<<endl;

    return 0;
}