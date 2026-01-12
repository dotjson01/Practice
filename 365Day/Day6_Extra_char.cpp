#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    // Method 1: Frequency Count
    char extraCharFreq(string &s1, string &s2) {
        unordered_map<char, int> freq;
        for(char c : s1) freq[c]++;
        for(char c : s2) {
            if(freq[c] > 0) freq[c]--;
            else return c;
        }
        return ' ';
    }
    
    // Method 2: XOR
    char extraCharXOR(string &s1, string &s2) {
        char result = 0;
        for(char c : s1) result ^= c;
        for(char c : s2) result ^= c;
        return result;
    }
    
    // Method 3: Sorting
    char extraCharSort(string &s1, string &s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for(int i = 0; i < s1.length(); i++) {
            if(s1[i] != s2[i]) return s2[i];
        }
        return s2.back();
    }
    
    // Method 4: ASCII Sum
    char extraCharSum(string &s1, string &s2) {
        int sum1 = 0, sum2 = 0;
        for(char c : s1) sum1 += c;
        for(char c : s2) sum2 += c;
        return (char)(sum2 - sum1);
    }
};

int main() {
    Solution sol;
    string s1 = "abcd";
    string s2 = "badce";
    
    cout << sol.extraCharFreq(s1, s2) << endl;  // e
    cout << sol.extraCharXOR(s1, s2) << endl;   // e
    
    string s3 = "abcd", s4 = "badce";
    cout << sol.extraCharSort(s3, s4) << endl;  // e
    
    cout << sol.extraCharSum(s1, s2) << endl;   // e
    
    return 0;
}
/*

## 🚀 **Interview Mein Kaise Explain Karein:**
```
Interviewer: "Find extra character in s2"

You: "Sir, main 4 approaches dekh sakta hoon:

1. Frequency Count - Hash map se track karunga
   - Time: O(n+m), Space: O(n)
   - Sabse clear aur intuitive

2. XOR Approach - Mathematical property use karunga
   - Time: O(n+m), Space: O(1)
   - Most optimized space

3. Sorting - Dono sort karke compare
   - Time: O(n log n), Space: O(1)
   - Simple but slower

4. ASCII Sum - Difference of sums
   - Time: O(n+m), Space: O(1)
   - Quick and elegant

Main frequency count recommend karunga for interviews
because it's clear and handles duplicates well.
But agar space optimize chahiye toh XOR best hai!"

*/