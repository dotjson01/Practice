#include <iostream>
#include <cmath>
#include <vector>
#include<algorithm> // using sort stl 
using namespace std;

class Solution
{
public:
    int mean(vector<int> &arr)
    {
        int sum = 0;
        for (int index = 0; index < arr.size(); index++)
        {
            sum += arr[index];
        }
        return (floor(sum / arr.size()));
    }

    int median(vector<int> &arr) {   
        
        sort(arr.begin() , arr.end());    // using algorithm library , want to use sort funcitonality 
        int n = arr.size();
        if(n%2== 1 ) return arr[n/2]; // odd ke liye

        return ( arr[n/2] + arr[n/2 - 1 ] ) / 2;    // for even median (n / 2 - 1)
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 19, 28, 50};
    int mean_ans = s.mean(arr);
    int median_ans = s.median(arr);

    cout << "Mean is : " << mean_ans << endl;
    cout << "Median is : " << median_ans << endl;
}