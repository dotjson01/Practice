#include<stdio.h>
#include<iostream>

using namespace std;

bool found(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            return true;
    }
        return false;
}

int main(){
    int arr[5] = {2,3,4,65,34};
    int size =5;

//showig to user to get values
cout<<"Enter the value"<<endl;

    // taking value from users
    int key;
    cin>>key;

    if(found(arr,size,key))
        cout<<"Found"<<endl;
    else{
        cout<<"Not Found"<<endl;
    }


}