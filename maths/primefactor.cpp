#include <iostream>
#include <cmath>
using namespace std;

// Function to print all prime factors of a given number n
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        cout << n;
}

int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}