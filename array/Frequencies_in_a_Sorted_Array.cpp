#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public: 
void frequenciesInSortedArray(vector<int>& arr){
    int n  = arr.size();
    int count = 1;

    for(int i = 1 ; i<n ; i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else {
            cout<< arr[i-1] << " -> " << count <<endl;
            count = 1;
        }
    }
    // last element
    cout<<arr[n-1] << " -> " <<count<<endl;
}
};

int main(){
    vector<int> arr = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10};
    Solution s;
    s.frequenciesInSortedArray(arr);
    return 0;
};