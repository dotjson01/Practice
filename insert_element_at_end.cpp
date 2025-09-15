#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> arr  = { 1, 2, 3,};
    int value = 50; // the value i have to insert 

    // insert at the end 
    arr.push_back(value);

    // display all array by using loop 
    for(int x : arr)
    {
        cout << x <<endl;
    }

    return 0;


}