#include <iostream>
using namespace std;

void fun(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*" ;
        }
        // space
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value";
    cin >> n;

    fun(n);
}