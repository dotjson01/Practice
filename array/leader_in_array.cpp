#include<iostream>
#include<vector>
using namespace std;


class Solution {
    public:
    vector<int> leader_in_array(vector<int> &arr){
        int n = arr.size();
        int leader = arr[n-1];
        cout<<leader<<endl;

        for(int i = n-2; i >= 0; i--){
            if(arr[i] >= leader){
                leader = arr[i];
                cout<<arr[i] << " ";
            }
        }
     
        cout<<endl;
        return arr;
    }
};
int main(){

    Solution s;
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> output = s.leader_in_array(arr);


    return 0;
}