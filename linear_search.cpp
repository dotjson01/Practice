#include <iostream>
using namespace std;

int main()
{
    int a[10] = {6, 4, 2, 7, 54, 9, 76, 32, 8, 10};
    int key;
    cout << "Enter the value of key";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (key == a[i])
        {
            cout << "Founda at " << i<<" index "<< endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
}