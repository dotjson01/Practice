#include <iostream>
using namespace std;

void fun(int n)
{

    // outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // inner loop for space
        for (int j = 0; j <= n - 1-i; j++)
        {
            cout << " ";
        }
        // loop inside inner loop
        for (int k = 1; k <= 2 * i + 1; k++) // yaaha pe <= 2 * i - 1 kr skte ho lekin yeh hai ki phli line negative hogi joh ki star print nhi krega
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    fun(n);
}