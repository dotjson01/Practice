

// brute force approach: 
 /*

#include <iostream>
using namespace std;

// Function to count divisors of a number
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) count++;
    }
    return count;
}

int exactly3Divisors(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (countDivisors(i) == 3) ans++;
    }
    return ans;
}

int main() {
    int n = 10;
    cout << "Naive Answer: " << exactly3Divisors(n) << endl; // Output: 2
    return 0;
}

*/



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Sieve of Eratosthenes to find all primes <= limit
vector<int> sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

// Function to calculate numbers <= n with exactly 3 divisors
int exactly3Divisors(int n) {
    int limit = sqrt(n);
    vector<int> primes = sieve(limit);
    int count = 0;
    
    for (int p : primes) {
        if ((long long)p * p <= n) count++;
    }
    return count;
}

int main() {
    int n = 1000;
    cout << "Optimized Answer: " << exactly3Divisors(n) << endl; // Output: 10
    return 0;
}