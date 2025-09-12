#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
    cout << (a<<1)<<endl;
    cout<< (b << 2)<<endl;
    return 0;

}

//  << 1  (ek kadam piche)
// a << b   → iska matlab hai a ke bits ko b times left shift karo
// a << b ≡ a * (2^b)
// Left shift (<<) → multiply by power of 2