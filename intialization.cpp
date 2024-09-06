#include<iostream>

using namespace std;
int main()
{
    int a;
    int b = 5;
    int c(6);
    int d{7};
    int e = {8};
    int f = {};

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    return 0;
}