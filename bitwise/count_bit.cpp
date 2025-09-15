// brute force approach 
/*

#include <bits/stdc++.h>
using namespace std;

// Function to count set bits from 1 to n
int countSetBits(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 0) {
            ans += (x & 1); // check LSB
            x >>= 1;        // right shift
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = countSetBits(n);
    cout << "Total number of set bits from 1 to " << n << " is: " << result << endl;

    return 0;
}

*/


#include <iostream>
#include<cmath>
using namespace std;

int largestPowerOf2(int n) {
    int x = 0;
    while ((1 << (x+1)) <= n) x++;
    return x;
}

int countSetBits(int n) {
    if (n == 0) return 0;
    
    int x = largestPowerOf2(n);   // step 1: largest power of 2
    
    int bitsTill2x = x * (1 << (x-1)); // step 2: full tray bits
    int msbRemaining = n - (1 << x) + 1; // step 3: extra MSB contribution
    int rest = countSetBits(n - (1 << x)); // step 4: recursive smaller problem
    
    return bitsTill2x + msbRemaining + rest; // step 5: add all
}

int main() {
    int n = 17;
    cout << "Total Set Bits from 1 to " << n << " = " << countSetBits(n) << endl;
}




/*
More optimize tareeka 

#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int ans = 0;
    while (n > 0) {
        int x = log2(n);  // Largest power of 2 <= n
        ans += x * (1 << (x - 1));   // Part 1: 1 to (2^x - 1)
        ans += n - (1 << x) + 1;     // Part 2: MSB contribution
        n = n - (1 << x);            // Reduce n
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
    return 0;
}

*/