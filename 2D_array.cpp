#include<iostream>

int main(){

    int arr[3][4];
    //array created 3 row and 4 columns 

    int brr[3][3] = {
        // 3 by 3 element created 
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

        std::cout<<brr[0][6]<<std::endl;

    return 0;
}