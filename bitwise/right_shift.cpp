#include<iostream>
using namespace std;

int main(){
     int a = 33;
    int b = 2;
    cout << (a>>1)<<endl;
    cout<< (b>>2)<<endl;
    cout<< (a>>b)<<endl;
    return 0;
} 

// >> 2 (doh kadam aage)

// a >> b  → a ke bits ko b times right shift karo
// a >> b ≡ a / (2^b)
// Right shift (>>) → divide by power of 2 (floor kar deta hai)
