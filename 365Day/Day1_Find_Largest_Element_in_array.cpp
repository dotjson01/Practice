
// Find the largest element in an array.
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int largest(vector<int> &arr){ // mtlb reference stored kiya , copied nhi 
        // we are storing max value into global 
        int max = arr[0]; // arr[0] isliye starting krna hai 0 index se aur ussi ke element ko leliye 
        // 0 kio nhi liya : isliye zero direct lete toh value zero hoti , toh index pe higest hota toh then it could create a problem

        // running for loop
        for(int i = 1 ; i <arr.size() ; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return max;
    }

};


int main(){

    //input leliya 
    int n;
    cin>>n;

    // array creation 
    vector<int> arr(n);
// Memory me banta hai:  arr = [ ?, ?, ?, ?, ? ]

// array ke spaces ko fill krna ha
cout<<"Enter the values of element inside a array"<<endl;

for(int i = 0 ; i<n;i++){
    cin>>arr[i];
    // input diya -> arr[90,32,54,5,0,100]
}

// creation of object
Solution obj;

// calling a function 
int max = obj.largest(arr); // object ke andar largest function hai aur funciton arr hold kar rh h 

//upar se function terminate hoke kuch leke aayega return main
cout<<max<<endl;

}