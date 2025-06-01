#include<iostream>
using namespace std;
int power(int x, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power(x*x,n/2);
    else
        return x*power(x*x,(n-1)/2);
}
int main()
{
    int x,n;
    cout<<"Enter the value of x and n"<<endl;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    return 0;
}