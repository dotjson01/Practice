#include<iostream>
using namespace std;

int main(){

    int arr [10] = { 10, 43, 76, 34, 67};
    int n = 5 , index = 2, value = 99;

    // shift elements right
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];                    // arr[5] = arr[4] → 67 copy hogaya ek step aage
                                                // Index:   0    1    2    3    4    5 
                                                // Value: [10] [43] [76] [34] [67] [67]
    }

    arr[index] = value;                         // arr [ 2 ]  = 99  -> 99 index[2] pe overwrite hogya
    n++;                                        // jaab value add kiya toh , array of size increase krdiya 

    for(int i = 0; i < n; i++)                  // aabh loop chlake saare value print krdoh
        cout << arr[i] << " ";

    return 0;
}


// optimial solution vector built in function used 
 /*
 #include<iosteram
 
 */