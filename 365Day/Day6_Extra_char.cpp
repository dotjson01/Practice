#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    char extraChar(string &s1, string &s2) {
        char result = 0;
        
        cout << "Initial result: " << (int)result << endl;
        
        // XOR s1
        cout << "\nProcessing s1: " << s1 << endl;
        for(char c : s1) {
            cout << "  result ^ '" << c << "' = ";
            result ^= c;
            cout << (int)result << endl;
        }
        
        // XOR s2
        cout << "\nProcessing s2: " << s2 << endl;
        for(char c : s2) {
            cout << "  result ^ '" << c << "' = ";
            result ^= c;
            cout << (int)result << endl;
        }
        
        cout << "\nFinal result: '" << result << "'" << endl;
        return result;
    }
};

int main() {
    Solution sol;
    string s1 = "abc";
    string s2 = "abcd";
    
    char ans = sol.extraChar(s1, s2);
    cout << "\nExtra character: " << ans << endl;
    
    return 0;
}