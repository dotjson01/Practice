#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int trailingzero(int num)
{
    if (num == 0)
    {
        return 1;
    }

    string s = to_string(abs(num));
    int count = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            count++;
        }
        else {break;};
    }
    return count;
}

int main()
{

    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The trailing zero of" << n << "is" << trailingzero(n) << endl;

    return 0;
}