#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {10,20,20,30,30,40,40};
    auto it = unique(arr.begin(), arr.end()); // finding the unique item and put into it variable 
    arr.erase(it, arr.end()); // element stored in it  variable remove it from end 

    for(int x : arr){
        cout<< x << " ";
    }
    cout<<endl;

    return 0;
}