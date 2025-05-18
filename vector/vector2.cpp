#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

// unique element question

// function of unique element
int findElement(vector<int> arr){

    // if element matches then cancel out 
    int ans =0;
    //traversing through multiple element to check 
    for(int i=0;i<arr.size();i++ ){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{

    int n;
    cout<<"Enter the size of vector"<<endl;
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter the Element inside the vector"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findElement(arr);

    cout<<"Element Found" << uniqueElement << endl;

    return 0;
}