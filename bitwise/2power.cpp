#include <iostream>
#include<cmath>
using namespace std;

// bool power2(int n) {
//     if (n <= 0) {
//         cout << "Enter a valid positive number" << endl;
//         return false;  // invalid case
//     }
//     return ( (n & (n-1)) == 0 );  // main trick
// }

// int main() {
//     int n;
//     cout << "Enter the n value: ";
//     cin >> n;

//     if (power2(n)) {
//         cout << "Yes, given number is a power of 2" << endl;
//     } else {
//         cout << "No, given number is NOT a power of 2" << endl;
//     }
//     return 0;
// }



int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;

    if(n<0){
        cout<<"Enter the positive number"<<endl;
    } 
    int count = 0 ;
    while(n>1){
        n = n>>1;
        count++;
    }

    int value = pow(2,count);
    cout<<value<<endl;
    return 0;
}