// #include<iosteam>
// using namespace std;

// vector<bool> sieve(int n){
//     // mark all prime with true
//     vector<bool> isPrime(n+1,true);
//     isPrime[0] = isPrime[1] =  false; // first 0 and 1 index mark false
//     // now let's come in 2 index 
//     // starting from 2 
//     for (int index = 2; index<=n; i++){
//         if(isPrime[i]){

//         }
//     }
// }



// int main(){
//     int n;
//     cout<< "Enter a number "<<endl;
//     cin>>n;

//     vector<bool> isPrime = sieve(n); // function calling started
// }




#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes function
vector<bool> sieve(int n) {
    // Array banao 0 se n tak, sabko true mark karo (prime maano)
    vector<bool> isPrime(n + 1, true);
    
    // 0 aur 1 ko non-prime mark karo
    isPrime[0] = isPrime[1] = false;
    
    // 2 se sqrt(n) tak loop chalaao
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // i ke multiples ko non-prime mark karo
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n;
    cout << "Enter a number tak jaha prime numbers chahiye: ";
    cin >> n;
    
    // Sieve call karo
    vector<bool> isPrime = sieve(n);
    
    // Print prime numbers
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0; // Added return statement for main
} // Added closing brace for main



