#include <iostream>
using namespace std;

int main()
{

    // array  declare
    int marks[6] = {10, 20, 30, 40, 45, 12};
    int n = 6;

    cout << "Array Elements : ";

    // loop
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}