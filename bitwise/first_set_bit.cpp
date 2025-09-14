#include <iostream>
using namespace std;

int getFirstSetBit(int n) {
    int pos = 1;  // position starts from 1 (not 0)
    while (n > 0) {
        if (n & 1)  // check LSB
            return pos; 
        n = n >> 1; // shift right
        pos++;
    }
    return 0; // if no set bit (for safety, though n>=1 here)
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "First set bit position = " << getFirstSetBit(n) << endl;
    return 0;
}





/*
optimised approach :

return log2(n & -n) + 1;

n = 12 (1100) → n & -n = 0100 → log2(4)=2 → +1 = 3

*/