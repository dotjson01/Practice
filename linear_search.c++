#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    if(arr[i]==key)
    return i;
    return -1;
}

int main(){
    int arr[]={5,6,7,12,32,54};
    int key=54;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=linear_search(arr,n,key);
    if(result==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at location\n"<<result+1;
    return 0;

}