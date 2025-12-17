// finding a second largest element  in the array 

/*
🔹 Second Largest Element in an Array (NO SORTING)

⚠️ Rules same:

Pehle thinking
Invariant likhna
Code baad me

Aaj ka challenge:
Ek hi loop me kaise second largest nikaloge
bina sort kiye?

1️⃣ Kaun-kaun se state variables chahiye?
2️⃣ Loop invariant kya hoga?

Input	                       Output	     Reason
[6,5,6,5,1,100,45,6]	          45	     correct
[5,5,5]	-1	                      no         second largest
[-10,-20,-30]	                 -20	     negatives handled
[INT_MIN,-10]                     INT_MIN	 fixed bug
[10]	                          -1	     size < 2

*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution{
    public:
    int secondLargest(vector<int>& arr){
        int n = arr.size();
        if(n<2)return -1;

        int largest = arr[0];
        int secondLa = INT_MIN;

        for(int i = 1; i<n;i++){
            int x = arr[i];

            if(x>largest){
                secondLa = largest;
                largest=x;
            }
            else if(x < largest && x>secondLa){
                secondLa = x;
            }
        }
        // kuch na mile toh 
        if(secondLa == INT_MIN) return -1;
        return secondLa;
    }
};

int main(){
    int n;
    cin>>n;

    vector<int> arr(n); // vector mai integer naam ka array leliya
    for(int i=0 ; i <n;i++){
        cin>>arr[i]; // array ek element uske size thk lega
    }
    Solution obj;
    cout<<obj.secondLargest(arr)<<endl;
}
