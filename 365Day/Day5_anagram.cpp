#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areAnagrams(string s1, string s2) {
        
        // PART 1: Length check
        if(s1.length() != s2.length()) {
            return false;
        }
        
        // PART 2: Frequency array
        int freq[26] = {0};
        
        // PART 3: Count characters in s1
        for(int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }
        
        // PART 4: Subtract characters in s2
        for(int i = 0; i < s2.length(); i++) {
            freq[s2[i] - 'a']--;
        }
        
        // PART 5: Check if all zeros
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};

// Testing
int main() {
    Solution sol;
    
    cout << sol.areAnagrams("geeks", "kseeg") << endl;     // 1 (true)
    cout << sol.areAnagrams("allergy", "allergyy") << endl; // 0 (false)
    cout << sol.areAnagrams("listen", "lists") << endl;     // 0 (false)
    
    return 0;
}