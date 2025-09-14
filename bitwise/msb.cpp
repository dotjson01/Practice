/*
log2(n) → returns position of MSB (as a number).
Floor(log2(n)) = sabse bada k jisme 2^k ≤ n.
MSB value = 2^(floor(log2(n))).
Base‑2 use karte hain kyunki computer power of 2 system (binary) me kaam karta hai.
*/


#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;

    int pos = (log2(n));           // example : log2(8) = 3   → 2^3 = 8
    int value = pow(2,pos);
    cout<<value<<endl;

    return 0;
}



// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Enter a positive number!" << endl;
//         return 0;
//     }

//     int pos = (int)log2(n);      // position of MSB
//     int value = 1 << pos;        // safer than pow
//     cout << "MSB = " << value << endl;

//     return 0;
// }