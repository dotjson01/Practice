/*

 * * * * *
 * * * *
 * * *
 * *
 *

*/

#include <iostream>
using namespace std;

void fin(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    fin(n);
}