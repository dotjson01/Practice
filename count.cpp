#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int arr[17] = {0,1,1,1,1,3,4,5,0,0,0,0,0,1,0,1,0};
    int size = 17;
    int i = 0;
    int j = 0; 

    for(int k= 0;k<size;k++){
        if(arr[k]==0)
        {
            // if zeroes found increment number
            i++;
        }
        else{
            //if ones found increment number
            j++;
        }
    }
    cout<<"Number of Zeroes "<<i<<endl;
    cout<<"Number of Ones "<<j<<endl;


    return 0;
}