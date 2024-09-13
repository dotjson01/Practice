#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, reverse = 0, remainder;
    cout << "Enter the number" << endl;
    cin >> number;

    int orginalnumber = number;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number /= 10;
    }
    cout << "Reverse number: " << reverse << endl;
    return 0;
}