#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long termOfGP(int a, int b, int n) {
        double r = (double)b / a;       // use floating-point division
        double ans = a * pow(r, n-1);   // formula a * r^(n-1)
        return (long long)floor(ans+0.5); // round to nearest integer
    }
};

int main() {
    Solution s;
    cout << s.termOfGP(1, 2, 5) << endl; // Expected 15
    return 0;
}