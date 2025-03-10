// array should be sorted 

#include<iostream>
using namespace std;

int main(){
    int a[7] = {21,32,43,54,65,76,87};
    int low=0,high=7,key; // low starting from left to right, high starting right to left 
    cout<<"Enter the search element"<<endl;
    cin>>key;

    while (low <= high){
    int mid = (low+high)/2; // center point 54 comes
    if(key == a[mid]){
        cout<<"Found"<<endl;
        return 0;
    }
    else if(key<a[mid]) // key not match with mid then either left or right suppose key smaller than mid
    {
        high = mid -1;
    }
    else if(key>a[mid]) // if element is greater than mid means right side
    {
        low = mid+1;
    }

    cout<<"Not Found"<<endl;
    return 0;
}
}