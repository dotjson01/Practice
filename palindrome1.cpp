#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;

    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    int reverseHalf = 0;
    while (x > reverseHalf)
    {
        reverseHalf = reverseHalf * 10 + x % 10;
        x /= 10;
    }
    return x == reverseHalf || x == reverseHalf / 10;
}
