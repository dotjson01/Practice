#include<iostream>
using namespace std;
int main(){

    int a= 5 ; // treated as signed bit aur signed bit 2's complement pe kaam krteh  h { Left se Right 1 first bit h toh : -1 }
    int c= 11;
    unsigned int b = 5;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    cout <<(~c)<<endl; // Trick to remember : -(x+1)
    return 0;
}



/*
Bitwise NOT (~) is a unary operator (works on one number).
It inverts each bit in the binary representation of a number:
0 → 1
1 → 0
For example:

text
n = 5
in binary:  0000 0101   (8-bit representation)
~n =        1111 1010

The ~ operator flips every switch.
On → Off
Off → On


*/