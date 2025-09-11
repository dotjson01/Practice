// #include<iostream>
// #include<vector>
// using namespace std;

// vector<bool> sieve(int n){ // function declared 
//     // vector ka size = n+1 , aur unn sabka value true , baad mai false krdenge condition ke time
//     vector<bool> isPrime(n+1, true); // assume kro saare prime number hai
//     isPrime[0] = isPrime[1] = false; // 0 aur 1 ko false corz, yeh base case ke saath khud apne se divide hote hai

//     // aab joh 1 se baade hai , 2 se start ho rhae hai || 2 ek number hai , jiski value abhi true hai
//     for(int i=2;i<=n;i++){
//         if(isPrime[i]) // if condition yeh bolta hai agar , main tabh hee execute krunga jaab mere andar se true pass hoga
//         {
//             for(int j = i; j<=n ; j++){  // i ki value upar for loop se aagyi , j mai chli gyi , aabh j increment ho rha hai +1
//                 isPrime[j*i] = false; // i constant hai , bass j increment ho rha hai , i ke multiples (i*2, i*3, i*4) ko false krdoh
//             }
//         }
//     }
//     return isPrime; 


// }

// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     if(n<=0){                                      // phla base case -ve ke liye hit hona
//         cout<<"Enter the Positive value"<<endl;            
//     return n;
//     };
//     vector<bool>isPrime= sieve(n);                  // agar 2 ya 2 se upar hoga toh fun mai enter kro

//     cout<<"Prime number of "<<n<<"are: ";
//     for(int out = 2; out<=n ; out++){
//         if(isPrime[out]){
//             cout << out << " ";
//         }
//     }
//     return 0;

    
// }

/*



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        // Handle edge cases
        if (n <= 1) return false; // 0 and 1 are not prime numbers

        // Create a boolean array to track prime numbers
        vector<bool> isPrime(n + 1, true); // Initialize all numbers as prime
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

        // Sieve of Eratosthenes
        for (int i = 2; i * i <= n; i++) { // Check up to the square root of n
            if (isPrime[i]) {
                for (int k = i * i; k <= n; k += i) { // Mark multiples of i as non-prime
                    isPrime[k] = false;
                }
            }
        }

        return isPrime[n]; // Return whether n is prime
    }
};

int main() {
    Solution sol;
    int n = 29; // Example input
    cout << n << " is prime: " << (sol.isPrime(n) ? "true" : "false") << endl;
    return 0;
}


*/



// optimised approached 10^9

#include <bits/stdc++.h>   // includes all standard headers
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPrime(n))
        cout << n << " is Prime" << endl;
    else
        cout << n << " is Not Prime" << endl;

    return 0;
}
